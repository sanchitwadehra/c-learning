#ifndef CLASSES_H
#define CLASSES_H

#include <vector>
#include <string>
#include <map>
using namespace std;

class Human
{
public:
    string name;
    int age;
    char gender;
    vector<string> phone_numbers;
    void printData();
};

class Student : public Human
{
public:
    int student_ID;
    string student_pwd;
    vector<int> issuing_IDs;
    void printData();
};

class Staff : public Human
{
public:
    int staff_ID;
    string staff_pwd;
    void printData();
};

class Author : public Human
{
public:
    int author_ID;
    vector<int> book_IDs;
    vector<pair<string, int>> tags_by_frequency;
    void printData();
};

class Book
{
public:
    string name;
    int book_ID;
    vector<int> author_IDs;
    int page_length;
    int published_year;
    int total_number_of_copies;
    int number_of_issued_copies;
    vector<string> tags;
    void printData();
};

class Issued
{
public:
    int issuing_ID;
    int book_ID;
    int number_of_copies_issued;
    int number_of_days_issued;
    string date_issued_on;
    void printData();
};

class IssueRequest
{
public:
    int request_ID;
    vector<int> book_IDs;
    vector<int> copies_for_each;
    string number_of_days;
    bool approval_status;
    void printData();
};

class LastIDUsed
{
public:
    int student_ID;
    int staff_ID;
    int author_ID;
    int book_ID;
    int issuing_ID;
    int request_ID;
    void printData();
};

class Tags
{
public:
    string name;
    vector<int> book_IDs;
    vector<int> author_IDs;
    void printData();
};

class Storage
{
public:
    vector<Student> students;
    vector<Book> books;
    vector<Staff> staffs;
    vector<Author> authors;
    vector<Issued> issues;
    vector<IssueRequest> requests;
    vector<Tags> tags;
    LastIDUsed lastID;
    map<string, bool> loadedFiles;
    void printData_students();
    void printData_books();
    void printData_staffs();
    void printData_authors();
    void printData_issues();
    void printData_requests();
    void printData_tags();
    void printData();
};

#endif