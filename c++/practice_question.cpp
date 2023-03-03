/*
Write a Program to create a database of the following items Name(string),Roll No.(int),Height(cm),Weight(kg) create a constructor to intiialise the value create display function to display detail illustration of the use of copy constructor also use the concept of destructor
*/
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    float height;
    float weight;

    // Constructor to initialize values
    Student(string n, int r, float h, float w)
    {
        name = n;
        rollNo = r;
        height = h;
        weight = w;
    }

    // Copy constructor
    Student(const Student &s)
    {
        name = s.name;
        rollNo = s.rollNo;
        height = s.height;
        weight = s.weight;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called for " << name << endl;
    }

    // Display function to display details
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rollNo << endl;
        cout << "Height: " << height << " cm" << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

int main()
{
    Student s1("Sanchit", 1, 180, 70.0f);
    s1.display();

    Student s2(s1); // Using copy constructor
    s2.display();

    return 0; // Destructor will be called for both objects here
}