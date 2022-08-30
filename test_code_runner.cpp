#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,d,e,f,g,h,num,abc,flag_a;
    float a0,b0,c0,d0,e0,f0,g0,h0;
    cout<<"Enter a Multi-digit number :- \n";
    cin>>num;
    flag_a=1;
    a=1;
    b0=pow(10,a);
    abc=static_cast<int>(b0);
    while((num%abc)<num){
        a++;
        c0=pow(10,a);
        abc=static_cast<int>(c0);
        flag_a++;
    }
    cout<<"(num/pow) :- "<<(num%abc)<<endl;
    cout<<"flag_a :- "<<flag_a<<endl;
    cout<<"a :- "<<a<<endl;
    cout<<"b0 :- "<<b0<<endl;
    cout<<"c0 :- "<<c0<<endl;
    cout<<"abc :- "<<abc<<endl;
    return 0;
}