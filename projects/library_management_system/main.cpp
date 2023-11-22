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
    int number_of_days_issued;
    string date_issued_on;
};

class issue_request{
    int request_ID;
    vector<int> book_IDs;
    vector<int> copies_for_each;
    string number_of_days;
    bool approval_status;
};

class last_ID_used{
    int student_ID;
    int staff_ID;
    int book_ID;
    int issuing_ID;
    int request_ID;
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
    cout<<"You are a student or a staff member?\n";
    cout<<"1. Student\n2. Staff\n";
    cin>>n;
    switch(n){
        case 1: {
            break;
        }
        case 2: {
            break;
        }
        default: {
            
        }
    }
    return 0;
}