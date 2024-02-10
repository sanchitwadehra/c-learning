#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <limits>
#include <sstream>
#include <fstream>
#include "../cache/loader.cpp"
#include "../headers/clrscr.h"
using namespace std;

Book closestObject(vector<Book> &arr, const string &target)
{
    int closestIndex = -1;
    int minDifference = numeric_limits<int>::max();

    // Check for double quotes in input and handle accordingly
    string searchTerm = target;
    size_t found = searchTerm.find("\"");
    if (found != string::npos)
    {
        searchTerm.erase(remove(searchTerm.begin(), searchTerm.end(), '\"'), searchTerm.end());
    }

    // Convert target to lowercase and remove spaces
    transform(searchTerm.begin(), searchTerm.end(), searchTerm.begin(), ::tolower);
    searchTerm.erase(remove_if(searchTerm.begin(), searchTerm.end(), ::isspace), searchTerm.end());

    for (size_t i = 0; i < arr.size(); ++i)
    {
        // Convert bookName to lowercase and remove spaces
        string bookName = arr[i].name;
        transform(bookName.begin(), bookName.end(), bookName.begin(), ::tolower);
        bookName.erase(remove_if(bookName.begin(), bookName.end(), ::isspace), bookName.end());

        size_t found = bookName.find(searchTerm);
        if (found != string::npos)
        {
            int difference = abs(static_cast<int>(bookName.length() - searchTerm.length()));
            if (difference < minDifference)
            {
                minDifference = difference;
                closestIndex = i;
            }
        }
    }

    if (closestIndex != -1)
    {
        return arr[closestIndex];
    }

    // If no close match found, return an empty book object
    return Book{};
}

void search_book_by_title(Storage& storage)
{
    clearScreen();
    read_books_csv("data/books_data.csv",storage);
    cout<<"Enter the Title :- "<<endl;
    string s;
    getline(cin >> ws, s);
    Book temp = closestObject(storage.books, s);
    temp.printData();
    cout<<"Enter 0 to return :- "<<endl;
    int cdmc;
    cin>>cdmc;
}