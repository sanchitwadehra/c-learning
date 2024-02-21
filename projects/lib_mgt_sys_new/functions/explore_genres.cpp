#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <limits>
#include <sstream>
#include <fstream>
#include "../headers/clrscr.h"
#include "../headers/loader.h"
using namespace std;

void explore_genres(Storage &storage)
{
    clearScreen();
    read_tags_csv("data/tags_data.csv", storage);
    cout << "Genres:\n";
    int index = 1;
    vector<string> genreList;
    for (auto &tag : storage.tags)
    {
        cout << index << ". " << tag.name << " (" << tag.book_IDs.size() << " books)\n";
        genreList.push_back(tag.name);
        index++;
    }
    cout << "Enter the genre number (0 to go back): ";
    int genreIndex;
    cin >> genreIndex;

    if (genreIndex == 0)
        return;

    string genre = genreList[genreIndex - 1];
    clearScreen();
    cout << "Books in " << genre << ":\n";
    index = 1;
    vector<string> bookList;
    map<int, Book> booksMap;
    map<int, Author> authorsMap;
    for (auto &book : storage.books)
    {
        booksMap[book.book_ID] = book;
    }
    for (auto &author : storage.authors)
    {
        authorsMap[author.author_ID] = author;
    }
    for (auto &tag : storage.tags)
    {
        if (tag.name == genre)
        {
            for (auto &book_ID : tag.book_IDs)
            {
                Book book = booksMap[book_ID];
                for (auto &author_ID : book.author_IDs)
                {
                    Author author = authorsMap[author_ID];
                    cout << index << ". " << book.name << " by " << author.name << "\n";
                    bookList.push_back(book.name);
                    index++;
                }
            }
        }
    }
    cout << "Enter the book number (0 to go back): ";
    int bookIndex;
    cin >> bookIndex;

    if (bookIndex == 0)
        return;

    clearScreen();
    string title = bookList[bookIndex - 1];
    for (auto &book : storage.books)
    {
        if (book.name == title)
        {
            book.printData();
            break;
        }
    }
    cout << "Enter your choice (0 to go back): ";
}

