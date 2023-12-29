#include "searching_algorithms.cpp"
void student()
{
    char i;
    string s;
    
    cout << "Are you looking for a specific book? (y/n)\n";
    cin >> i;
    if (i == 'Y' || i == 'y')
    {
        cout<<"Please enter the name of the book.\n";
        cin >> s;
        Book temp=closestObject(library.books,s);
        temp.printData();
    }
    else
    {
        cout << "Explore the Genres :-\n";
    }
}