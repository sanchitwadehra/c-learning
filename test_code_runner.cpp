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

int factorial(int num1,int num2){
    int out;
    out=num2;
    while(num2>=2){
        num2--;
        out=out*num2;
    }
    return out;
}

int ncr(int num1,int num2){
    int a,b,c,n,r,ncr;
    n=num2;
    r=num1;
    a=factorial(0,n);
    b=factorial(0,n-r);
    c=factorial(0,r);
    ncr=a/(b*c);
    return ncr;
}

void pascaltri(int num1,int num2){
    cout<<num2;
    for(int a=1;a<=num2;a++){
        for(int b=1;b<=a;b++){
            cout<<ncr(b-1,a-1);
        }
    }
    return;
}

int main(){
    int a,b,c;
    cout<<"Enter first number :-\n";
    cin>>a;
    cout<<"Enter second number :-\n";
    cin>>b;
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
    cout<<"The Factorial of "<<b<<" is :-"<<endl;
    cout<<factorial(a,b)<<endl;
    cout<<"The nCr for n="<<b<<" and r="<<a<<" is :-"<<endl;
    cout<<ncr(a,b)<<endl;
    pascaltri(a,b);
    return 0;
}

/*
#include<iostream>
using namespace std;

int main(){
    int num2=10;
    for(int a=1;a<=num2;a++){
        for(int b=1;b<=a;b++){
            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/