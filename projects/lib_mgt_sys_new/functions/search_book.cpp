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

Book closestTitle(vector<Book> &arr, const string &target)
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

void search_book_by_title(Storage &storage)
{
    clearScreen();
    read_books_csv("data/books_data.csv", storage);
    cout << "Enter the Title :- " << endl;
    string s;
    getline(cin >> ws, s);
    Book temp = closestTitle(storage.books, s);
    temp.printData();
    cout << "Enter your choice (0 to go back): ";
}

Author closestAuthor(vector<Author> &arr, const string &target)
{
    int closestIndex = -1;
    int minDifference = numeric_limits<int>::max();

    string searchTerm = target;
    size_t found = searchTerm.find("\"");
    if (found != string::npos)
    {
        searchTerm.erase(remove(searchTerm.begin(), searchTerm.end(), '\"'), searchTerm.end());
    }

    transform(searchTerm.begin(), searchTerm.end(), searchTerm.begin(), ::tolower);
    searchTerm.erase(remove_if(searchTerm.begin(), searchTerm.end(), ::isspace), searchTerm.end());

    for (size_t i = 0; i < arr.size(); ++i)
    {
        string authorName = arr[i].name;
        transform(authorName.begin(), authorName.end(), authorName.begin(), ::tolower);
        authorName.erase(remove_if(authorName.begin(), authorName.end(), ::isspace), authorName.end());

        size_t found = authorName.find(searchTerm);
        if (found != string::npos)
        {
            int difference = abs(static_cast<int>(authorName.length() - searchTerm.length()));
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

    return Author{};
}

void search_book_by_author(Storage &storage)
{
    clearScreen();
    read_authors_csv("data/authors_data.csv", storage);
    read_books_csv("data/books_data.csv", storage);
    cout << "Enter the Author :- " << endl;
    string s;
    getline(cin >> ws, s);
    Author temp = closestAuthor(storage.authors, s);
    temp.printData();
    cout << "Books by this author:\n";
    for (auto &id : temp.book_IDs)
    {
        for (auto &book : storage.books)
        {
            if (book.book_ID == id)
            {
                book.printData();
            }
        }
    }
    cout << "Enter your choice (0 to go back): ";
}
