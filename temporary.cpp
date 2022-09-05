#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,d,e,f,g,h,num,abc,flag_a,out,in,abc2;
    float a0,b0,c0,d0,e0,f0,g0,h0;
    out=0;
    cout<<"Enter a Multi-digit number :- \n";
    cin>>num;
    flag_a=1;
    a=0;
    b=1;
    b0=pow(10,a);
    abc=static_cast<int>(b0);
    while((num%abc)<num){
        a++;
        c0=pow(10,a);
        abc=static_cast<int>(c0);
        flag_a++;
    }
    cout<<"Initial a :- "<<a<<endl;
    while(a>0){
        c0=pow(10,b);
        abc=static_cast<int>(c0);
        cout<<"abc in loop :- "<<abc<<endl;
        d0=pow(10,a);
        abc2=static_cast<int>(d0);
        out=out+(num%abc)*abc2;
        b++;
        a--;
    }
    cout<<"after a :- "<<a<<endl;
    cout<<"flag_a :- "<<flag_a<<endl;
    cout<<"out :- "<<out<<endl;
    cout<<"b :- "<<b;
    return 0;
}