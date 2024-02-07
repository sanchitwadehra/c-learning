#include <iostream>
#include "../headers/clrscr.h"
using namespace std;

void displayStudentMenu()
{
    clearScreen();
    cout << "Student Menu:\n";
    cout << "1. Search Book\n";
    cout << "2. Explore Genres\n";
    cout << "3. Return Book\n";
    cout << "Enter your choice (0 to go back): ";
}


void displaySearchBookMenu()
{
    clearScreen();
    cout << "Search Book Menu:\n";
    cout << "1. By Title\n";
    cout << "2. By Author\n";
    cout << "Enter your choice (0 to go back): ";
}