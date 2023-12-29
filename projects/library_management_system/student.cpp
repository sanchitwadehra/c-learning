#include "searching_algorithms.cpp"
void student()
{
    char i;
    string s;
    cout << "Are you looking for a specific book? (y/n)\n";
    cin >> i;
    if (i == 'Y' || i == 'y')
    {
    f:
        cout << "Please enter the name of the book.\n";
        cin >> s;
        Book temp = closestObject(library.books, s);
        temp.printData();
        cout << "Do you want to get the book or try and search again? (y/n)\n";
        cin >> i;
        if (i == 'y' || i == 'Y')
        {
        }
        else
        {
            goto f;
        }
    }
    else
    {
        cout << "Explore the Genres :-\n";
    }
}