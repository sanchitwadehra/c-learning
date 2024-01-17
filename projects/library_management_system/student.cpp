#include "searching_algorithms.cpp"
void student()
{
    char i;
    string s;
    system("cls");
    cout << "Are you looking for a specific book? (y/n)\n";
    cin >> i;
    if (i == 'Y' || i == 'y')
    {
    f:
        system("cls");
        cout << "Please enter the name of the book.\n";
        getline(cin >> ws, s);
        // Read this :- https://stackoverflow.com/questions/70138063/why-do-cin-and-getline-exhibit-different-reading-behavior
        Book temp = closestObject(library.books, s);
        system("cls");
        temp.printData();
        cout << "Do you want to get the book issued or try and search again? (y/n)\n";
        cin >> i;
        if (i == 'y' || i == 'Y')
        {
            system("cls");
            library.printData();
        }
        else
        {
            system("cls");
            goto f;
        }
    }
    else
    {
        cout << "Explore the Genres :-\n";
    }
}