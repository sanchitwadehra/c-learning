#include<iostream>
#include<cmath>
using namespace std;

int print(int num1,int num2){
    int b;
    for(int a=num1;a<=num2;a++){
        for(int b=2;b<=a;b++){
            if(a%b==0){
                break;
            }
        }
        if(b==a){
            cout<<b<<endl;
        }
    }
return 0;
}

int main(){
    int num_1,num_2;
    cout<<"Enter first number :-\n";
    cin>>num_1;
    cout<<"Enter second number :-\n";
    cin>>num_2;
    cout<<"The prime numbers between them is :-\n"<<print(num_1,num_2)<<endl;
    return 0;
}