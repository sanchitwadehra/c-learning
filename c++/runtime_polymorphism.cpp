/*
Aim: - WAP to design a class representing the information regarding digital library (books, tape: book & tape should be separate classes having the base class as media).The class should have the functionality for adding new item, issuing, deposit etc. The program should link the objects with concerned function by the concept of runtime polymorphism.
*/
#include <iostream>
using namespace std;
class person
{
    int age;
    string name ;
    public:
    void get(string n, int a)
    {
         age = a;
        name = n;
    }
    void show()
    {
        cout<<name<<age;
    }
    void operator > (person* p)
    {
        if(age>p-> age)
        {
            cout<<"the person is elder"<<endl;
        }
        else
        {
            cout<<"the person is younger"<<endl;
        }
    }
    };
    int main()
{
     person p1,p2;
     p1.get("abc",80);
     p2.get("xyz",40);
     p1.show();
     p2.show();
     p1>&p2;
}