#ifdef _WIN32
    #define CLEAR "cls"
#else //In any other OS
    #define CLEAR "clear"
#endif

#include <iostream>
#include "student_menu.cpp"
#include "staff_menu.cpp"
using namespace std;

void clearScreen()
{
    system(CLEAR);
}

void displayBaseMenu()
{
    clearScreen();
    cout << "Base Menu:\n";
    cout << "1. Staff\n";
    cout << "2. Student\n";
    cout << "Enter your choice (0 to exit): ";
}

void displayStaffMenu()
{
    clearScreen();
    cout << "Staff Menu:\n";
    cout << "1. Pending Issue Requests\n";
    cout << "2. Issuing History\n";
    cout << "3. Add New Book\n";
    cout << "Enter your choice (0 to go back): ";
}

void displayStudentMenu()
{
    clearScreen();
    cout << "Student Menu:\n";
    cout << "1. Search Book\n";
    cout << "2. Explore\n";
    cout << "3. Return Book\n";
    cout << "Enter your choice (0 to go back): ";
}

int main()
{
    int baseChoice, staffChoice, studentChoice;

    while (true)
    {
        displayBaseMenu();
        cin >> baseChoice;

        if (baseChoice == 0)
            break;

        switch (baseChoice)
        {
        case 1:
            while (true)
            {
                displayStaffMenu();
                cin >> staffChoice;

                if (staffChoice == 0)
                    break;

                // Add your functionality for each staff menu choice here
            }
            break;

        case 2:
            while (true)
            {
                displayStudentMenu();
                cin >> studentChoice;

                if (studentChoice == 0)
                    break;

                switch (studentChoice)
                {
                case 1:
                    while (true)
                    {
                        displaySearchBookMenu();
                        int searchBookChoice;
                        cin >> searchBookChoice;

                        if (searchBookChoice == 0)
                            break;

                        // Add your functionality for each search book menu choice here
                    }
                    break;

                    // Handle other student menu choices here
                }

                // Add your functionality for each student menu choice here
            }
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
