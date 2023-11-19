#include <Windows.h>
#include <string>

// Function to display a message box with caps lock status
void showNotification(const std::string& message, const std::string& title) {
    MessageBox(NULL, message.c_str(), title.c_str(), MB_OK);
}

// Function to create a window for indicating caps lock status
LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
    switch (message) {
        case WM_CREATE: {
            // Create a window with specific dimensions and settings
            HWND hCapsLockIndicator = CreateWindow(
                TEXT("STATIC"), TEXT("CAPS LOCK: OFF"),
                WS_VISIBLE | WS_CHILD | SS_CENTER,
                100, 100, 200, 50,
                hWnd, NULL, NULL, NULL
            );
            break;
        }
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

int main() {
    // Register window class
    WNDCLASS wc = {0};
    wc.lpfnWndProc = WindowProcedure;
    wc.hInstance = GetModuleHandle(NULL);
    wc.lpszClassName = TEXT("CapsLockIndicator");
    RegisterClass(&wc);

    // Create the window
    HWND hwnd = CreateWindow(
        TEXT("CapsLockIndicator"), TEXT("Caps Lock Indicator"),
        WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
        400, 300, NULL, NULL, NULL, NULL
    );

    // Show and update the window
    ShowWindow(hwnd, SW_SHOW);
    UpdateWindow(hwnd);

    // Infinite loop to continuously monitor the caps lock status
    while (true) {
        // Get the state of the caps lock key
        SHORT keyState = GetKeyState(VK_CAPITAL);

        // Check if the most significant bit is set (indicating caps lock is on)
        bool capsLockOn = keyState & 0x0001;

        // Display notification based on caps lock status
        if (capsLockOn) {
            showNotification("Caps Lock: ON", "Caps Lock Notification");
            // Update the indicator window text
            SetWindowText(FindWindow(TEXT("STATIC"), TEXT("CAPS LOCK: OFF")), TEXT("CAPS LOCK: ON"));
        } else {
            showNotification("Caps Lock: OFF", "Caps Lock Notification");
            // Update the indicator window text
            SetWindowText(FindWindow(TEXT("STATIC"), TEXT("CAPS LOCK: ON")), TEXT("CAPS LOCK: OFF"));
        }

        // Small delay before checking again (in milliseconds)
        Sleep(1000); // Change this value for a different check interval
    }

    return 0;
}
