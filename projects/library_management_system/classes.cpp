#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Human
{
public:
    string name;
    int age;
    char gender;
    vector<string> phone_numbers;
    void printData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Phone Numbers: ";
        for (const auto &number : phone_numbers)
        {
            cout << number << " ";
        }
        cout << endl;
    }
};

class Student : public Human
{
public:
    int student_ID;
    vector<int> issuing_IDs;
    void printData()
    {
        Human::printData();
        cout << "Student ID: " << student_ID << endl;
        cout << "Issuing IDs: ";
        for (const auto &id : issuing_IDs)
        {
            cout << id << " ";
        }
        cout << endl;
    }
};

class Staff : public Human
{
public:
    int staff_ID;
    void printData()
    {
        Human::printData();
        cout << "Staff ID: " << staff_ID << endl;
    }
};

class Author : public Human
{
public:
    int author_ID;
    vector<int> book_IDs;
    vector<pair<string, int>> tags_by_frequency;
    void printData()
    {
        Human::printData();
        cout << "Author ID: " << author_ID << endl;
        cout << "Book IDs: ";
        for (const auto &id : book_IDs)
        {
            cout << id << " ";
        }
        cout << endl;
        cout << "Tags by Frequency: ";
        for (const auto &tag : tags_by_frequency)
        {
            cout << "(" << tag.first << ", " << tag.second << ") ";
        }
        cout << endl;
    }
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
    void printData()
    {
        cout << "Book Name: " << name << endl;
        cout << "Author IDs: ";
        for (const auto &id : author_IDs)
        {
            cout << id << " ";
        }
        cout << endl;
        cout << "Page Length: " << page_length << endl;
        cout << "Published Year: " << published_year << endl;
        cout << "Total Number of Copies: " << total_number_of_copies << endl;
        cout << "Number of Issued Copies: " << number_of_issued_copies << endl;
        cout << "Tags: ";
        for (const auto &tag : tags)
        {
            cout << tag << " ";
        }
        cout << endl;
    }
};

class Issued
{
public:
    int issuing_ID;
    int book_ID;
    int number_of_copies_issued;
    int number_of_days_issued;
    string date_issued_on;
    void printData()
    {
        cout << "Issuing ID: " << issuing_ID << endl;
        cout << "Book ID: " << book_ID << endl;
        cout << "Number of Copies Issued: " << number_of_copies_issued << endl;
        cout << "Number of Days Issued: " << number_of_days_issued << endl;
        cout << "Date Issued On: " << date_issued_on << endl;
    }
};

class IssueRequest
{
public:
    int request_ID;
    vector<int> book_IDs;
    vector<int> copies_for_each;
    string number_of_days;
    bool approval_status;
    void printData()
    {
        cout << "Request ID: " << request_ID << endl;
        cout << "Book IDs: ";
        for (const auto &id : book_IDs)
        {
            cout << id << " ";
        }
        cout << endl;
        cout << "Copies for Each: ";
        for (const auto &copies : copies_for_each)
        {
            cout << copies << " ";
        }
        cout << endl;
        cout << "Number of Days: " << number_of_days << endl;
        cout << "Approval Status: " << (approval_status ? "Approved" : "Not Approved") << endl;
    }
};

class LastIDUsed
{
public:
    int student_ID;
    int staff_ID;
    int book_ID;
    int issuing_ID;
    int request_ID;
    void printData()
    {
        cout << "Last Student ID Used: " << student_ID << endl;
        cout << "Last Staff ID Used: " << staff_ID << endl;
        cout << "Last Book ID Used: " << book_ID << endl;
        cout << "Last Issuing ID Used: " << issuing_ID << endl;
        cout << "Last Request ID Used: " << request_ID << endl;
    }
};

class Tags
{
public:
    string name;
    vector<int> book_IDs;
    vector<int> author_IDs;
    void printData()
    {
        cout << "Tag Name: " << name << endl;
        cout << "Book IDs: ";
        for (const auto &id : book_IDs)
        {
            cout << id << " ";
        }
        cout << endl;
        cout << "Author IDs: ";
        for (const auto &id : author_IDs)
        {
            cout << id << " ";
        }
        cout << endl;
    }
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
    void printData()
    {
        cout << "Students:\n";
        for (auto &student : students)
        {
            student.printData();
            cout << endl;
        }

        cout << "Books:\n";
        for (auto &book : books)
        {
            book.printData();
            cout << endl;
        }

        cout << "Staffs:\n";
        for (auto &staff : staffs)
        {
            staff.printData();
            cout << endl;
        }

        cout << "Authors:\n";
        for (auto &author : authors)
        {
            author.printData();
            cout << endl;
        }

        cout << "Issues:\n";
        for (auto &issue : issues)
        {
            issue.printData();
            cout << endl;
        }

        cout << "Requests:\n";
        for (auto &request : requests)
        {
            request.printData();
            cout << endl;
        }

        cout << "Tags:\n";
        for (auto &tag : tags)
        {
            tag.printData();
            cout << endl;
        }
    }
};