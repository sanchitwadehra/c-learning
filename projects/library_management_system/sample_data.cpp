#include "classes.cpp"

Storage library;

void sample_data()
{
    Student student1;
    student1.name = "Raj";
    student1.age = 20;
    student1.gender = 'M';
    student1.student_ID = 1;
    student1.phone_numbers = {"1234567890", "9876543210"};

    Staff staff1;
    staff1.name = "Simran";
    staff1.age = 21;
    staff1.gender = 'F';
    staff1.staff_ID = 1;
    staff1.phone_numbers = {"9998887776"};

    Book book1;
    book1.name = "The Alchemist";
    book1.book_ID = 1;
    book1.author_IDs = {1};
    book1.page_length = 208;
    book1.published_year = 1988;
    book1.total_number_of_copies = 50;
    book1.number_of_issued_copies = 10;
    book1.tags = {"Fiction", "Philosophy"};

    Book book2;
    book2.name = "The Great Gatsby";
    book2.book_ID = 2;
    book2.author_IDs = {2};
    book2.page_length = 180;
    book2.published_year = 1925;
    book2.total_number_of_copies = 30;
    book2.number_of_issued_copies = 5;
    book2.tags = {"Classic", "Drama"};

    Issued issuedBook1;
    issuedBook1.issuing_ID = 1;
    issuedBook1.book_ID = 1;
    issuedBook1.number_of_copies_issued = 1;
    issuedBook1.number_of_days_issued = 14;
    issuedBook1.date_issued_on = "2023-11-25";

    IssueRequest request1;
    request1.request_ID = 1;
    request1.book_IDs = {2};
    request1.copies_for_each = {2};
    request1.number_of_days = "7";
    request1.approval_status = false;

    LastIDUsed basic;
    basic.student_ID = 1;
    basic.staff_ID = 1;
    basic.book_ID = 2;
    basic.issuing_ID = 1;
    basic.request_ID = 1;

    Author author1;
    author1.name = "Paulo Coelho";
    author1.age = 74;
    author1.gender = 'M';
    author1.author_ID = 1;
    author1.phone_numbers = {"9876543210"};
    author1.book_IDs = {1};
    author1.tags_by_frequency = {{"Fiction", 1}, {"Philosophy", 1}};

    Author author2;
    author2.name = "F. Scott Fitzgerald";
    author2.age = 44;
    author2.gender = 'M';
    author2.author_ID = 2;
    author2.phone_numbers = {"9998887776"};
    author2.book_IDs = {2};
    author2.tags_by_frequency = {{"Classic", 1}, {"Drama", 1}};

    Tags tag1;
    tag1.name = "Fiction";
    tag1.book_IDs = {1};
    tag1.author_IDs = {1};

    Tags tag2;
    tag2.name = "Philosophy";
    tag2.book_IDs = {1};
    tag2.author_IDs = {1};

    Tags tag3;
    tag1.name = "Classic";
    tag1.book_IDs = {2};
    tag1.author_IDs = {2};

    Tags tag4;
    tag2.name = "Drama";
    tag2.book_IDs = {2};
    tag2.author_IDs = {2};

    library.students.push_back(student1);
    library.staffs.push_back(staff1);
    library.books.push_back(book1);
    library.books.push_back(book2);
    library.authors.push_back(author1);
    library.authors.push_back(author2);
    library.issues.push_back(issuedBook1);
    library.requests.push_back(request1);
    library.tags.push_back(tag1);
    library.tags.push_back(tag2);
    library.tags.push_back(tag3);
    library.tags.push_back(tag4);
}

bool compareStudents(const Student &a, const Student &b)
{
    return a.name < b.name;
}

bool compareBooks(const Book &a, const Book &b)
{
    return a.name < b.name;
}

bool compareStaff(const Staff &a, const Staff &b)
{
    return a.name < b.name;
}

bool compareAuthors(const Author &a, const Author &b)
{
    return a.name < b.name;
}

bool compareTags(const Tags &a, const Tags &b)
{
    return a.name < b.name;
}

void sorting()
{
    sort(library.students.begin(), library.students.end(), compareStudents);

    sort(library.books.begin(), library.books.end(), compareBooks);

    sort(library.staffs.begin(), library.staffs.end(), compareStaff);

    sort(library.authors.begin(), library.authors.end(), compareAuthors);

    sort(library.tags.begin(), library.tags.end(), compareTags);
}