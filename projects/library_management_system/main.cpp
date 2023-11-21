#include<iostream>
using namespace std;

class human{
    string name;
    int age;
    char gender;
};

class book{
    string name;
    int page_length;
    int published_year;
    int number_of_copies;
};

class user: public human{
    
};

class staff: public human{

};

class author: public human{

};

int main(){
    int n;
    cout<<"Welcome to LMS\n";
    cout<<"How can I help you?\n";
    cout<<"1. Get a book issued\n2. ";
    return 0;
}