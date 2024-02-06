#ifdef _WIN32
    #define CLEAR "cls"
#else //In any other OS
    #define CLEAR "clear"
#endif

#include <iostream>
using namespace std;

void clearScreen()
{
    system(CLEAR);
}

void displaySearchBookMenu()
{
    clearScreen();
    cout << "Search Book Menu:\n";
    cout << "1. By Title\n";
    cout << "2. By Author\n";
    cout << "Enter your choice (0 to go back): ";
}