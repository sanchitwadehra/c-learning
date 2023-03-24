#include<iostream>
using namespace std;
class student{
    protected:
    string uid;
    string name;
    public:
    void get_name(){
        cout<<"uid :- "<<endl;
        cin>>uid;
        cout<<"name :- "<<endl;
        cin>>name;
    }
    void put_name(){
        cout<<"uid :- "<<uid<<endl;
        cout<<"name :- "<<name<<endl;
    }
};
class intmarks:virtual public student{
    protected:
    int maths_marks;
    int science_marks;
    public:
    void get_marks(){
        cout<<"Maths Marks :- "<<endl;
        cin>>maths_marks;
        cout<<"Science Marks :- "<<endl;
        cin>>science_marks;
    }
    void put_marks(){
        cout<<"Maths Marks :- "<<maths_marks<<endl;
        cout<<"Science Marks :- "<<science_marks<<endl; 
    }
};
class extmarks:virtual public student{
    protected:
    int maths_ext_marks;
    int science_ext_marks;
    public:
    void get_score(){
        cout<<"External Maths Marks :- "<<endl;
        cin>>maths_ext_marks;
        cout<<"External Science Marks :- "<<endl;
        cin>>science_ext_marks;
    }
    void put_score(){
        cout<<"External Maths Marks :- "<<maths_ext_marks<<endl;
        cout<<"External Science Marks :- "<<science_ext_marks<<endl;
    }
};
class result:public intmarks,public extmarks{
    public:
    void input(){
        cout<<"Details :- "<<endl;
        get_name();
        cout<<"Internal Marks :- "<<endl;
        get_marks();
        cout<<"External Marks :- "<<endl;
        get_score();
    }
    void display(){
        cout<<endl<<endl;
        cout<<"Details :- "<<endl;
        put_name();
        cout<<"Internal Marks :- "<<endl;
        put_marks();
        cout<<"External Marks :- "<<endl;
        put_score();
        cout<<"Total :- "<<endl;
        int total;
        total=maths_marks+science_marks+maths_ext_marks+science_ext_marks;
        cout<<total<<endl;
    }
};
int main(){
    result s1;
    s1.input();
    s1.display();
    return 0;
}