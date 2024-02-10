#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include "../cache/classes.cpp"
#include "../headers/clrscr.h"
using namespace std;

vector<int> parse_ids(const string &ids_str)
{
    vector<int> ids;
    stringstream ss(ids_str.substr(1, ids_str.size() - 2)); // Remove the {} brackets
    string id;
    while (getline(ss, id, ','))
    {
        ids.push_back(stoi(id));
    }
    return ids;
}

// vector<int> parse_ids(const string &ids_str)
// {
//     vector<int> ids;
//     stringstream ss(ids_str.substr(1, ids_str.size() - 2)); // Remove the {} brackets
//     string id;
//     while (getline(ss, id, ','))
//     {
//         ids.push_back(stoi(id));
//     }
//     return ids;
// }

vector<string> parse_phone_numbers(const string &phone_numbers_str)
{
    vector<string> phone_numbers;
    stringstream ss(phone_numbers_str.substr(1, phone_numbers_str.size() - 2)); // Remove the {} brackets
    string phone_number;
    while (getline(ss, phone_number, ','))
    {
        phone_numbers.push_back(phone_number);
    }
    return phone_numbers;
}

void read_tags_csv(const string &filename, Storage &storage)
{
    ifstream file(filename);
    string line;
    getline(file, line); // Skip the header line
    while (getline(file, line))
    {
        stringstream ss(line);
        Tags tag;
        getline(ss, tag.name, ',');
        string book_ids_str, author_ids_str;
        getline(ss, book_ids_str, ',');
        getline(ss, author_ids_str, ',');
        tag.book_IDs = parse_ids(book_ids_str);
        tag.author_IDs = parse_ids(author_ids_str);
        storage.tags.push_back(tag);
    }
}

void read_students_csv(const string &filename, Storage &storage)
{
    ifstream file(filename);
    string line;
    getline(file, line); // Skip the header line
    while (getline(file, line))
    {
        stringstream ss(line);
        Student student;
        getline(ss, student.name, ',');
        string age_str, gender_str, student_ID_str, student_pwd_str, phone_numbers_str;
        getline(ss, age_str, ',');
        getline(ss, gender_str, ',');
        getline(ss, student_ID_str, ',');
        getline(ss, student_pwd_str, ',');
        getline(ss, phone_numbers_str, ',');
        student.age = stoi(age_str);
        student.gender = gender_str[0];
        student.student_ID = stoi(student_ID_str);
        student.student_pwd = student_pwd_str;
        student.phone_numbers = parse_phone_numbers(phone_numbers_str);
        storage.students.push_back(student);
    }
}

void read_staffs_csv(const string &filename, Storage &storage)
{
    ifstream file(filename);
    string line;
    getline(file, line); // Skip the header line
    while (getline(file, line))
    {
        stringstream ss(line);
        Staff staff;
        getline(ss, staff.name, ',');
        string age_str, gender_str, staff_ID_str, staff_pwd_str, phone_numbers_str;
        getline(ss, age_str, ',');
        getline(ss, gender_str, ',');
        getline(ss, staff_ID_str, ',');
        getline(ss, staff_pwd_str, ',');
        getline(ss, phone_numbers_str, ',');
        staff.age = stoi(age_str);
        staff.gender = gender_str[0];
        staff.staff_ID = stoi(staff_ID_str);
        staff.staff_pwd = staff_pwd_str;
        staff.phone_numbers = parse_phone_numbers(phone_numbers_str);
        storage.staffs.push_back(staff);
    }
}

void read_requests_csv(const string &filename, Storage &storage)
{
    ifstream file(filename);
    string line;
    getline(file, line); // Skip the header line
    while (getline(file, line))
    {
        stringstream ss(line);
        IssueRequest request;
        string request_ID_str, book_IDs_str, copies_for_each_str, number_of_days_str, approval_status_str;
        getline(ss, request_ID_str, ',');
        getline(ss, book_IDs_str, ',');
        getline(ss, copies_for_each_str, ',');
        getline(ss, number_of_days_str, ',');
        getline(ss, approval_status_str, ',');
        request.request_ID = stoi(request_ID_str);
        request.book_IDs = parse_ids(book_IDs_str);
        request.copies_for_each = parse_ids(copies_for_each_str);
        request.number_of_days = number_of_days_str;
        request.approval_status = (approval_status_str == "Approved");
        storage.requests.push_back(request);
    }
}

void read_last_ids_csv(const string &filename, Storage &storage)
{
    ifstream file(filename);
    string line;
    getline(file, line); // Skip the header line
    while (getline(file, line))
    {
        stringstream ss(line);
        string student_ID_str, staff_ID_str, book_ID_str, issuing_ID_str, request_ID_str;
        getline(ss, student_ID_str, ',');
        getline(ss, staff_ID_str, ',');
        getline(ss, book_ID_str, ',');
        getline(ss, issuing_ID_str, ',');
        getline(ss, request_ID_str, ',');
        storage.lastID.student_ID = stoi(student_ID_str);
        storage.lastID.staff_ID = stoi(staff_ID_str);
        storage.lastID.book_ID = stoi(book_ID_str);
        storage.lastID.issuing_ID = stoi(issuing_ID_str);
        storage.lastID.request_ID = stoi(request_ID_str);
    }
}

void read_issues_csv(const string &filename, Storage &storage)
{
    ifstream file(filename);
    string line;
    getline(file, line); // Skip the header line
    while (getline(file, line))
    {
        stringstream ss(line);
        Issued issue;
        string issuing_ID_str, book_ID_str, number_of_copies_issued_str, number_of_days_issued_str;
        getline(ss, issuing_ID_str, ',');
        getline(ss, book_ID_str, ',');
        getline(ss, number_of_copies_issued_str, ',');
        getline(ss, number_of_days_issued_str, ',');
        getline(ss, issue.date_issued_on, ',');
        issue.issuing_ID = stoi(issuing_ID_str);
        issue.book_ID = stoi(book_ID_str);
        issue.number_of_copies_issued = stoi(number_of_copies_issued_str);
        issue.number_of_days_issued = stoi(number_of_days_issued_str);
        storage.issues.push_back(issue);
    }
}

void read_books_csv(const string &filename, Storage &storage)
{
    ifstream file(filename);
    string line;
    getline(file, line); // Skip the header line
    while (getline(file, line))
    {
        stringstream ss(line);
        Book book;
        getline(ss, book.name, ',');
        string book_id_str, author_ids_str, page_length_str, published_year_str, total_copies_str, issued_copies_str, tags_str;
        getline(ss, book_id_str, ',');
        getline(ss, author_ids_str, ',');
        getline(ss, page_length_str, ',');
        getline(ss, published_year_str, ',');
        getline(ss, total_copies_str, ',');
        getline(ss, issued_copies_str, ',');
        getline(ss, tags_str, ',');
        book.book_ID = stoi(book_id_str);
        book.author_IDs = parse_ids(author_ids_str);
        book.page_length = stoi(page_length_str);
        book.published_year = stoi(published_year_str);
        book.total_number_of_copies = stoi(total_copies_str);
        book.number_of_issued_copies = stoi(issued_copies_str);
        // Parse tags_str to get the tags
        stringstream ss_tags(tags_str.substr(1, tags_str.size() - 2)); // Remove the {} brackets
        string tag;
        while (getline(ss_tags, tag, ','))
        {
            book.tags.push_back(tag);
        }
        storage.books.push_back(book);
    }
}

void read_authors_csv(const string &filename, Storage &storage)
{
    ifstream file(filename);
    string line;
    getline(file, line); // Skip the header line
    while (getline(file, line))
    {
        stringstream ss(line);
        Author author;
        getline(ss, author.name, ',');
        string age_str, author_id_str, phone_numbers_str, book_ids_str, tags_by_frequency_str;
        getline(ss, age_str, ',');
        string temp;
        getline(ss, temp, ',');
        author.gender = temp[0];
        getline(ss, author_id_str, ',');
        getline(ss, phone_numbers_str, ',');
        getline(ss, book_ids_str, ',');
        getline(ss, tags_by_frequency_str, ',');
        author.age = stoi(age_str);
        author.author_ID = stoi(author_id_str);
        author.book_IDs = parse_ids(book_ids_str);
        // Parse phone_numbers_str to get the phone numbers
        stringstream ss_phone(phone_numbers_str.substr(1, phone_numbers_str.size() - 2)); // Remove the {} brackets
        string phone_number;
        while (getline(ss_phone, phone_number, ','))
        {
            author.phone_numbers.push_back(phone_number);
        }
        // Parse tags_by_frequency_str to get the tags by frequency
        stringstream ss_tags(tags_by_frequency_str.substr(1, tags_by_frequency_str.size() - 2)); // Remove the {} brackets
        string tag_by_frequency;
        while (getline(ss_tags, tag_by_frequency, ','))
        {
            int pos = tag_by_frequency.find(':');
            string tag = tag_by_frequency.substr(0, pos);
            int frequency = stoi(tag_by_frequency.substr(pos + 1));
            author.tags_by_frequency.push_back(make_pair(tag, frequency));
        }
        storage.authors.push_back(author);
    }
}