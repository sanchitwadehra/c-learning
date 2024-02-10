#include <iostream>
#include "headers/clrscr.h"
#include "menus/student_menu.cpp"
#include "menus/staff_menu.cpp"
#include "functions/search_book.cpp"
using namespace std;

void displayBaseMenu()
{
    clearScreen();
    cout << "Base Menu:\n";
    cout << "1. Staff\n";
    cout << "2. Student\n";
    cout << "Enter your choice (0 to exit): ";
}

int main()
{
    Storage storage;
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

                        switch (searchBookChoice)
                        {
                            while (true)
                            {
                            case 1:
                                search_book_by_title(storage);
                                break;
                            }
                            break;
                        }
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
