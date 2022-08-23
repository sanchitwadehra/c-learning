#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :- \n";
    cin>>num;
    bool flag=1;
    for(int a=2;a<=sqrt(num);a++){
        if(num%a==0){
            cout<<"Non-Prime";
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"Prime";
    }
    return 0;
}