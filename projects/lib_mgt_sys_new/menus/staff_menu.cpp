#include <iostream>
#include "../headers/clrscr.h"
using namespace std;

void displayStaffMenu()
{
    clearScreen();
    cout << "Staff Menu:\n";
    cout << "1. Pending Issue Requests\n";
    cout << "2. Issuing History\n";
    cout << "3. Add New Book\n";
    cout << "Enter your choice (0 to go back): ";
}