#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Book
{
    string name;
    // Any other members
};

int matchingCharacters(const string &str1, const string &str2)
{
    int count = 0;
    for (size_t i = 0; i < min(str1.length(), str2.length()); ++i)
    {
        if (str1[i] == str2[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

Book findBestMatch(const vector<Book> &arr, const string &target)
{
    Book bestMatch;
    int maxMatch = 0;

    for (const Book &book : arr)
    {
        int currMatch = matchingCharacters(book.name, target);
        if (currMatch > maxMatch)
        {
            maxMatch = currMatch;
            bestMatch = book;
        }
    }

    return bestMatch;
}

int main()
{
    vector<Book> arr = {
        {"The Alchemist"},
        {"The Great Gatsby"}};

    string target = "Great"; // Target string

    Book bestBook = findBestMatch(arr, target);
    cout << "Best match: " << bestBook.name << endl;

    return 0;
}
