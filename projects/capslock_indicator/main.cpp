#include <iostream>
#include <Windows.h>

// Function to display notification on the console
void showNotification(const std::string& message) {
    std::cout << message << std::endl;
}

int main() {
    // Infinite loop to continuously monitor the caps lock status
    while (true) {
        // Get the state of the caps lock key
        SHORT keyState = GetKeyState(VK_CAPITAL);

        // Check if the most significant bit is set (indicating caps lock is on)
        bool capsLockOn = keyState & 0x0001;

        // Display notification based on caps lock status
        if (capsLockOn) {
            showNotification("Caps Lock: ON");
        } else {
            showNotification("Caps Lock: OFF");
        }

        // Small delay before checking again (in milliseconds)
        Sleep(1000); // Change this value for a different check interval
    }

    return 0;
}
