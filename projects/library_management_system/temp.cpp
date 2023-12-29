#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Define your classes here...

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

// Define printData functions for other classes similarly...

int main()
{
    // Create instances of your classes and call printData to display their data
    // Example:
    Student studentObj;
    studentObj.name = "John Doe";
    studentObj.age = 20;
    studentObj.gender = 'M';
    studentObj.phone_numbers = {"1234567890", "9876543210"};
    studentObj.student_ID = 1001;
    studentObj.issuing_IDs = {101, 102, 103};

    // Call printData function to display data
    studentObj.printData();

    return 0;
}
