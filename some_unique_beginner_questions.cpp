#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :- \n";
    cin>>num;
    bool flag=1;
    for(int a=2;a<=sqrt(num);a++){//sqrt() is used here as if a number has factor until sqrt of it 
    //then the factor after sqrt is actually a multiple of that first factor
        if(num%a==0){
            cout<<"Non-Prime";
            flag=0;/*Unique way to know weather a If statement was executed or not*/
            break;
        }
    }
    if(flag==1){
        cout<<"Prime";
    }
    return 0;
}