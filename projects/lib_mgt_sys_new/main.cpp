#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stack>
using namespace std;
int main()
{
    //sample_data();
    //sorting();
    int n;

    stack<int> menuStack; // Stack to keep track of menu levels
    menuStack.push(0);    // Push the initial menu level

    bool exitProgram = false;

    do
    {
        int currentMenu = menuStack.top();

        switch (currentMenu)
        {
        case 0:
            system("cls");
            cout << "Welcome to LMS\n";
            cout << "1. Register\n2. Login\n";
            cout << "Enter your choice (0 to exit): ";
            cin >> n;

            switch (n)
            {
            case 1:
            case 2:
                menuStack.push(n);
                break;

            case 0:
                exitProgram = true;
                break;

            default:
                // Handle invalid input
                cout << "Invalid choice\n";
            }
            break;

        case 1:
        {
            system("cls");
            int n;
            cout << "You chose to Register. What type of registration?\n";
            cout << "1. Student Registration\n2. Staff Registration\n";
            cout << "Enter your choice (0 to go back): ";
            cin >> n;

            switch (n)
            {
            case 0:
                menuStack.pop(); // Go back to the previous menu
                break;

            case 1:
                //reg_student();
                break;

            case 2:
                //reg_staff();
                break;

            default:
                cout << "Invalid choice for registration\n";
            }
            break;
        }

        case 2:
        {
            system("cls");
            int n;
            cout << "You chose to Login. What type of login?\n";
            cout << "1. Student Login\n2. Staff Login\n";
            cout << "Enter your choice (0 to go back): ";
            cin >> n;

            switch (n)
            {
            case 0:
                menuStack.pop(); // Go back to the previous menu
                break;

            case 1:
                //log_student();
                break;

            case 2:
                //log_staff();
                break;

            default:
                cout << "Invalid choice for login\n";
            }
            break;
        }
        }

    } while (!exitProgram);

    return 0;
}
