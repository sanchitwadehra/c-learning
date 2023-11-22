#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Human {
public:
    string name;
    int age;
    char gender;
    vector<string> phone_numbers;
};

class Book {
public:
    string name;
    vector<int> author_IDs;
    int page_length;
    int published_year;
    int total_number_of_copies;
    int number_of_issued_copies;
    vector<string> tags;
};

class Issued {
public:
    int issuing_ID;
    int book_ID;
    int number_of_copies_issued;
    int number_of_days_issued;
    string date_issued_on;
};

class IssueRequest {
public:
    int request_ID;
    vector<int> book_IDs;
    vector<int> copies_for_each;
    string number_of_days;
    bool approval_status;
};

class LastIDUsed {
public:
    int student_ID;
    int staff_ID;
    int book_ID;
    int issuing_ID;
    int request_ID;
};

class Student : public Human {
public:
    int student_ID;
    vector<int> issuing_IDs;
};

class Staff : public Human {
public:
    int staff_ID;
};

class Author : public Human {
public:
    int author_ID;
    vector<int> book_IDs;
    vector<pair<string, int>> tags_by_frequency;
};

int main() {
    int n;
    cout << "Welcome to LMS\n";
    cout << "Are you a student or a staff member?\n";
    cout << "1. Student\n2. Staff\n";
    cin >> n;
    switch (n) {
        case 1: {
            cout << "Hi, great to have you here\n";
            break;
        }
        case 2: {
            break;
        }
        default: {
            // Handle invalid input
            cout << "Invalid choice\n";
        }
    }
    return 0;
}