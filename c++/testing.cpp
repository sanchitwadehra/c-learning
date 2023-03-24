#include<iostream>
using namespace std;
class A{
    protected:
    public:
    void show(){
        cout<<"In class A"<<endl;
    }
};
class B{
    protected:
    public:
    void show(){
        cout<<"In class B"<<endl;
    }
};
class C:public A,public B{
    public:
    void show(){
        cout<<"In class C"<<endl;
    }
};
int main(){
    C b1;
    b1.show();
    return 0;
}