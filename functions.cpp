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
    int a,b,c,d,f1;
    f1=0;
    b=1;
    cout<<f1;
    cout<<b;
    for(a=0;f1<=num2;f1++){
        a=b+a;
        cout<<a;
        b=a;
    }
    return;
}

int main(){
    int a,b;
    cout<<"Enter first number :-\n";
    cin>>a;
    cout<<"Enter second number :-\n";
    cin>>b;
    /*cout<<"The prime numbers between them is :- "<<print_prime(a,b)<<endl;
    This would have been wrong it is a function just like 
    if statement ,while statement ,etc. */
    primes_between(a,b);
    fibonacci_between(a,b);
    return 0;
}