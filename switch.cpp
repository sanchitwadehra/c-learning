#include <iostream>
using namespace std;

int main(){
    float num1;
    float num2;
    cout<<"Enter first number :-\n";
    cin>>num1;
    cout<<"Enter second number :-\n";
    cin>>num2;
    char op;
    cout<<"Enter a operator :-\n";
    cin>>op;
    float sol;
    cout<<"Solution :-\n";
    /*if(op=='+'){
        sol=num1+num2;
        cout<<sol<<endl;
    }
    else if(op=='-'){
        sol=num2-num1;
        cout<<sol<<endl;
    }
    else if(op=='*'){
        sol=num1*num2;
        cout<<sol;
    }
    else if(op=='/'){
        sol=num2/num1;
        cout<<sol<<endl;
    }
    else {
        cout<<"Sorry didn't recognise the operator\n";
    }*/
switch (op)
{
case '+':
    sol=num1+num2;//you can't write num1+num2=sol you have to write sol=num1+num2 
    cout<<sol<<endl;//as lvalue is rquired as left opperand
    break;//break is needed or else compiler will go on to compile the cases after
case '-'://condition fulfilling case too
    sol=num2-num1;
    cout<<sol<<endl;
    break;
case '*':
    sol=num1*num2;
    cout<<sol<<endl;
    break;
case '/':
    sol=num2/num1;
    cout<<sol<<endl;
    break;
default:
    cout<<"Sorry didn't recognise the operator\n";
    break;
}
return 0;
}