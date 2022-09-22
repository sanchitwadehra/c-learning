#include<iostream>
#include<cmath>
using namespace std;

//void means null so there is 
//nothing written in return statement
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
    cout<<"The fibonacci numbers till "<<num2<<"th position are :-"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    f1=0;
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
    int out;
    cout<<"The factorial of "<<num2<<" is :-"<<endl;
    out=num2;
    while(num2>=2){
        num2--;
        out=out*num2;
    }
    cout<<out<<endl;
}

int main(){
    int a,b,c;
    cout<<"Enter first number :-\n";
    cin>>a;
    cout<<"Enter second number :-\n";
    cin>>b;
    /*cout<<"The prime numbers between them is :- "<<print_prime(a,b)<<endl;
    This would have been wrong it is a function just like 
    if statement ,while statement ,etc. */
    if(a>=b){
        c=a;
        a=b;
        b=c;
        cout<<"The numbers have been arranged in ascending order :-"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
    }
    primes_between(a,b);
    fibonacci_between(a,b);
    factorial(a,b);
    return 0;
}