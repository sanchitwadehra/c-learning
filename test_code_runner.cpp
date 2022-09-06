#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,number,lastdigit,cubed_int,sum,f1;
    float cubed;
    f1=0;
    sum=0;
    cout<<"Enter a number :-"<<endl;
    cin>>num;
    number=num;
    while(number>=1){
        lastdigit=(number%10);
        cubed=pow(lastdigit,3);
        cubed_int=static_cast<int>(cubed);
        sum=cubed_int+sum;
        number=number-lastdigit;
        number=number/10;
        f1++;
    }
    cout<<f1<<endl;
    cout<<sum<<endl;
    cout<<num<<endl;
    cout<<number<<endl;
    if(sum==num){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"not a armstrong number"<<endl;
    }
    return 0;
}