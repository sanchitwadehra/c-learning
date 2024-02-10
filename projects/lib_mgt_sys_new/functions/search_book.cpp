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

// #include <fstream>
// #include <vector>
// #include <sstream>
// #include <algorithm>
// #include <cctype>

// struct Book {
//     string name;
//     int book_ID;
//     string author_IDs;
//     int page_length;
//     int published_year;
//     int total_number_of_copies;
//     int number_of_issued_copies;
//     string tags;
// };

// vector<Book> read_csv(const string& filename) {
//     ifstream file(filename);
//     vector<Book> books;
//     string line;
//     while (getline(file, line)) {
//         stringstream ss(line);
//         string field;
//         Book book;
//         getline(ss, book.name, ',');
//         ss >> book.book_ID;
//         getline(ss, book.author_IDs, ',');
//         ss >> book.page_length >> book.published_year >> book.total_number_of_copies >> book.number_of_issued_copies;
//         getline(ss, book.tags, ',');
//         books.push_back(book);
//     }
//     return books;
// }

// Book closest_book(vector<Book>& books, const string& title) {
//     string normalized_title = title;
//     normalized_title.erase(remove_if(normalized_title.begin(), normalized_title.end(), ::isspace), normalized_title.end());
//     transform(normalized_title.begin(), normalized_title.end(), normalized_title.begin(), ::tolower);

//     int closest_index = -1;
//     int min_difference = numeric_limits<int>::max();

//     for (int i = 0; i < books.size(); ++i) {
//         string book_name = books[i].name;
//         book_name.erase(remove_if(book_name.begin(), book_name.end(), ::isspace), book_name.end());
//         transform(book_name.begin(), book_name.end(), book_name.begin(), ::tolower);

//         size_t found = book_name.find(normalized_title);
//         if (found != string::npos) {
//             int difference = abs(static_cast<int>(book_name.length() - normalized_title.length()));
//             if (difference < min_difference) {
//                 min_difference = difference;
//                 closest_index = i;
//             }
//         }
//     }

//     if (closest_index != -1) {
//         return books[closest_index];
//     } else {
//         return Book{};
//     }
// }

// int main() {
//     vector<Book> books = read_csv("../data/books_data.csv");
//     string title;
//     cout << "Enter a book title: ";
//     getline(cin, title);
//     Book book = closest_book(books, title);
//     cout << "Closest match: " << book.name << endl;
//     return 0;
// }
