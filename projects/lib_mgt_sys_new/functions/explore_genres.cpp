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

    // Load the tags data
    read_tags_csv("data/tags_data.csv", storage);

    // Print the list of genres and the number of books in each genre
    for (int i = 0; i < storage.tags.size(); i++)
    {
        cout << i + 1 << ". " << storage.tags[i].name << " (" << storage.tags[i].book_IDs.size() << " books)\n";
    }

    // Prompt the user to select a genre
    cout << "Enter the number of the genre you want to explore: ";
    int genre_choice;
    cin >> genre_choice;

    // Get the selected genre
    Tags selected_genre = storage.tags[genre_choice - 1];

    // Load the books data
    read_books_csv("data/books_data.csv", storage);

    // Print the list of books in the selected genre along with the author's name
    for (int i = 0; i < selected_genre.book_IDs.size(); i++)
    {
        for (Book &book : storage.books)
        {
            if (book.book_ID == selected_genre.book_IDs[i])
            {
                cout << book.name << " by " << book.author_IDs[0] << "\n"; // Assuming each book has one author
            }
        }
    }

    // Prompt the user to select a book
    cout << "Enter the number of the book you want to view details of: ";
    int book_choice;
    cin >> book_choice;

    // Get the selected book and print its details
    Book selected_book = storage.books[book_choice - 1];
    selected_book.printData();
}
