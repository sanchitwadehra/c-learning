#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Book {
    std::string name;
    // Any other members
};

int matchingCharacters(const std::string& str1, const std::string& str2) {
    int count = 0;
    for (size_t i = 0; i < std::min(str1.length(), str2.length()); ++i) {
        if (str1[i] == str2[i]) {
            count++;
        } else {
            break;
        }
    }
    return count;
}

Book findBestMatch(const std::vector<Book>& arr, const std::string& target) {
    Book bestMatch;
    int maxMatch = 0;

    for (const Book& book : arr) {
        int currMatch = matchingCharacters(book.name, target);
        if (currMatch > maxMatch) {
            maxMatch = currMatch;
            bestMatch = book;
        }
    }

    return bestMatch;
}

int main() {
    std::vector<Book> arr = {
        {"The Alchemist"},
        {"The Great Gatsby"}
    };

    std::string target = "Great"; // Target string

    Book bestBook = findBestMatch(arr, target);
    std::cout << "Best match: " << bestBook.name << std::endl;

    return 0;
}
