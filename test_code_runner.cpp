#include<iostream>
#include<cmath>
using namespace std;

void primes_between(int num1,int num2){
    int b;
    cout<<"The prime numbers between them are :- "<<endl;
    for(int a=num1;a<=num2;a++){
        for(b=2;b<=a;b++){
            if(a%b==0){
                break;
            }
        }
        if(b==a){
            cout<<b<<endl;
        }
    }
return;
}

void fibonacci_between(int num1,int num2){
    int a,b,c,f1;
    a=0;
    b=1;
    cout<<a<<endl;
    cout<<b<<endl;
    f1=0;
    cout<<"The fibonacci numbers till "<<num2<<"th position are :-"<<endl;
    while(f1<=num2){
    c=a+b;
    cout<<c<<endl;;
    a=b;
    b=c;
    f1++;
    }
    return;
}

void factorial(int num1,int num2){
    
}

int main(){
    int a,b;
    cout<<"Enter first number :-\n";
    cin>>a;
    cout<<"Enter second number :-\n";
    cin>>b;
    primes_between(a,b);
    fibonacci_between(a,b);
    return 0;
}