//WAP that takes information aboutindstitutional staff employee code,subject,publication    officer code,name,grade  typist code,name,typing speed,daily wages   display it using multiple inheritance
#include<iostream>
using namespace std;
class teacher{
    public:
    string employee_code;
    string subject;
    int publications;
    void show(){
        cout<<"Teacher Details :- "<<endl;
        cout<<"employee code :- "<<employee_code<<endl;
        cout<<"subject :- "<<subject<<endl;
        cout<<"publications :- "<<publications<<endl;
        cout<<endl;
    }
};
class officer{
    public:
    string officer_code;
    string officer_name;
    string grade;
    void show(){
        cout<<"Officer Details :- "<<endl;
        cout<<"Code :- "<<officer_code<<endl;
        cout<<"name :- "<<officer_name<<endl;
        cout<<"grade :- "<<grade<<endl;
        cout<<endl;
    }
};
class typist:public teacher,public officer{
    public:
    string typist_name;
    int typ_speed;
    int daily_wages;
    void show(){
        
        teacher::show();
        officer::show();
        
        cout<<"Typist Details :- "<<endl;
        cout<<"Name :- "<<typist_name<<endl;
        cout<<"speed :- "<<typ_speed<<endl;
        cout<<"Daily Wages :- "<<daily_wages<<endl;
        cout<<endl;
    }
};
int main(){
    typist obj;
    obj.employee_code="Abc5432";
    obj.subject="Maths";
    obj.publications=5;
    obj.officer_code="ncsik456";
    obj.officer_name="Sanchit";
    obj.grade="A";
    obj.typist_name="Vishwanath";
    obj.typ_speed=80;
    obj.daily_wages=1500;
    obj.show();
    return 0;
}