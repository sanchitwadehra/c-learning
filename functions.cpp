#include<iostream>
#include<cmath>
using namespace std;

//void means null so there is 
//nothing written in return statement
void print(int num1,int num2){
    int b;
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

int print_prime(int num_1,int num_2){
    print(num_1,num_2);
    return 0;
}

int main(){
    int a,b;
    cout<<"Enter first number :-\n";
    cin>>a;
    cout<<"Enter second number :-\n";
    cin>>b;
    cout<<"The prime numbers between them is :- "<<endl;
    /*cout<<"The prime numbers between them is :- "<<print_prime(a,b)<<endl;
    This would have been wrong it is a function just like 
    if statement ,while statement ,etc. */
    print_prime(a,b);
    return 0;
}