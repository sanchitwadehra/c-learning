#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class human{
    string name;
    int age;
    char gender;
    int phone_number[10];
};

class book{
    string name;
    vector<int> author_IDs;
    int page_length;
    int published_year;
    int total_number_of_copies;
    int number_of_issued_copies;
    vector<string> tags;
};

class issued{
    int issuing_ID;
    int book_ID;
    int number_of_copies_issued;
};

class student: public human{
    int student_ID;
    vector<int> issuing_IDs;
};

class staff: public human{
    int staff_ID;
};

class author: public human{
    int author_ID;
    vector<int> book_IDs;
    vector<pair<string,int>> tags_by_frequency;
};

int main(){
    int n;
    cout<<"Welcome to LMS\n";
    cout<<"How can I help you?\n";
    cout<<"1. Get a book issued\n2. ";
    return 0;
}