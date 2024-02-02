#include <iostream>
#include <stack>
using namespace std;

void displayBaseMenu()
{
    cout << "Base Menu:\n";
    cout << "1. Staff\n";
    cout << "2. Student\n";
    cout << "Enter your choice (0 to exit): ";
}

void displayStaffMenu()
{
    cout << "Staff Menu:\n";
    cout << "1. Pending Issue Requests\n";
    cout << "2. Issuing History\n";
    cout << "3. Add New Book\n";
    cout << "Enter your choice (0 to go back): ";
}

void displayStudentMenu()
{
    cout << "Student Menu:\n";
    cout << "1. Search Book\n";
    cout << "2. Explore\n";
    cout << "3. Return Book\n";
    cout << "Enter your choice (0 to go back): ";
}

int main()
{
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
            displayBaseMenu();
            int n;
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
                cout << "Invalid choice\n";
            }
            break;

        case 1:
        case 2:
        {
            system("cls");
            int choice;

            if (menuStack.size() == 2)
                displayStaffMenu();
            else
                displayStudentMenu();

            cin >> choice;

            switch (choice)
            {
            case 0:
                menuStack.pop(); // Go back to the previous menu
                break;

            case 1:
                // Handle staff or student specific functionality
                break;

            case 2:
                // Handle staff or student specific functionality
                break;

            case 3:
                if (menuStack.size() == 3 && menuStack.top() == 2)
                {
                    // Handle return book for student
                }
                else
                {
                    cout << "Invalid choice\n";
                }
                break;

            default:
                cout << "Invalid choice\n";
            }
            break;
        }
        }

    } while (!exitProgram);

    return 0;
}
