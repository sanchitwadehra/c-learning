#include <iostream>
#include "../headers/clrscr.h"
using namespace std;

void search_book_by_title(){
    clearScreen();
    cout<<"searching book ......"<<endl;
    int search;
    cin>>search;
}

#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cctype>

struct Book {
    string name;
    int book_ID;
    string author_IDs;
    int page_length;
    int published_year;
    int total_number_of_copies;
    int number_of_issued_copies;
    string tags;
};

vector<Book> read_csv(const string& filename) {
    ifstream file(filename);
    vector<Book> books;
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string field;
        Book book;
        getline(ss, book.name, ',');
        ss >> book.book_ID;
        getline(ss, book.author_IDs, ',');
        ss >> book.page_length >> book.published_year >> book.total_number_of_copies >> book.number_of_issued_copies;
        getline(ss, book.tags, ',');
        books.push_back(book);
    }
    return books;
}

Book closest_book(vector<Book>& books, const string& title) {
    string normalized_title = title;
    normalized_title.erase(remove_if(normalized_title.begin(), normalized_title.end(), ::isspace), normalized_title.end());
    transform(normalized_title.begin(), normalized_title.end(), normalized_title.begin(), ::tolower);

    int closest_index = -1;
    int min_difference = numeric_limits<int>::max();

    for (int i = 0; i < books.size(); ++i) {
        string book_name = books[i].name;
        book_name.erase(remove_if(book_name.begin(), book_name.end(), ::isspace), book_name.end());
        transform(book_name.begin(), book_name.end(), book_name.begin(), ::tolower);

        size_t found = book_name.find(normalized_title);
        if (found != string::npos) {
            int difference = abs(static_cast<int>(book_name.length() - normalized_title.length()));
            if (difference < min_difference) {
                min_difference = difference;
                closest_index = i;
            }
        }
    }

    if (closest_index != -1) {
        return books[closest_index];
    } else {
        return Book{};
    }
}

int main() {
    vector<Book> books = read_csv("../data/books_data.csv");
    string title;
    cout << "Enter a book title: ";
    getline(cin, title);
    Book book = closest_book(books, title);
    cout << "Closest match: " << book.name << endl;
    return 0;
}
