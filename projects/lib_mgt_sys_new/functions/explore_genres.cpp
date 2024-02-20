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

void explore_genres(Storage &storage)
{
    clearScreen();
    read_tags_csv("data/tags_data.csv", storage);
    cout << "Genres:\n";
    for (auto &tag : storage.tags)
    {
        cout << tag.name << " (" << tag.book_IDs.size() << " books)\n";
    }
    cout << "Enter the genre (0 to go back): ";
    string genre;
    getline(cin >> ws, genre);

    if (genre == "0")
        return;

    clearScreen();
    cout << "Books in " << genre << ":\n";
    for (auto &book : storage.books)
    {
        if (find(book.tags.begin(), book.tags.end(), genre) != book.tags.end())
        {
            for (auto &author_ID : book.author_IDs)
            {
                for (auto &author : storage.authors)
                {
                    if (author.author_ID == author_ID)
                    {
                        cout << book.name << " by " << author.name << "\n";
                        break;
                    }
                }
            }
        }
    }
    cout << "Enter the book title (0 to go back): ";
    string title;
    getline(cin >> ws, title);

    if (title == "0")
        return;

    clearScreen();
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
