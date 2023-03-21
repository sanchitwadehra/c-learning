#include<iostream>
using namespace std;
class student{
    protected:
    int uid;
    int numb;
    public:
    void get_number(){
        cout<<"uid :- "<<endl;
        cin>>uid;
        cout<<"number :- "<<endl;
        cin>>numb;
    }
    void put_number(){
        cout<<"uid :- "<<uid<<endl;
        cout<<"number :- "<<numb<<endl;
    }
};
class test:virtual public student{
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
class sport:virtual public student{
    protected:
    int football_score;
    int cricket_score;
    public:
    void get_score(){
        cout<<"Football Score :- "<<endl;
        cin>>football_score;
        cout<<"Cricket Score :- "<<endl;
        cin>>cricket_score;
    }
    void put_score(){
        cout<<"Football Score :- "<<football_score<<endl;
        cout<<"Cricket Score :- "<<cricket_score<<endl;
    }
};
class result:public test,public sport{
    public:
    void input(){
        cout<<"Details :- "<<endl;
        get_number();
        cout<<"Marks :- "<<endl;
        get_marks();
        cout<<"Score :- "<<endl;
        get_score();
    }
    void display(){
        cout<<endl<<endl;
        cout<<"Details :- "<<endl;
        put_number();
        cout<<"Marks :- "<<endl;
        put_marks();
        cout<<"Score :- "<<endl;
        put_score();
        cout<<"Total :- "<<endl;
        int total;
        total=maths_marks+science_marks+football_score+cricket_score;
        cout<<total<<endl;
    }
};
int main(){
    result s1;
    s1.input();
    s1.display();
    return 0;
}