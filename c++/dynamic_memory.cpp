#include<iostream>
using namespace std;
class A{
   
    int* p1;
    int sum;
 public:
    A()
    {
        p1=new int[5];
    }
    void get(){
        cout<<"Enter the integers into array :-"<<endl;
        for(int i=0;i<5;i++){
            cin>>p1[i];
        }
    }

    void display(){
        sum=0;
        cout<<"printing the enetered value :- "<<endl;
        for(int i=0;i<5;i++){
            cout<<p1[i];
        }
        cout<<endl;
        cout<<"Sum :- "<<endl;
        for(int i=0;i<5;i++){
            sum=sum+p1[i];
        }
        //delete []p1;
        cout<<sum<<endl;
    }
    ~A()
    {
        delete []p1;
    }
};
int main(){
    A a;
    a.get();
    a.display();
    return 0;
}