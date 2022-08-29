#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Multi-digit number :- \n";
    cin>>num;
    int flag_a=1;
    int a=1;
    float b=pow(10,a);
    int abc=static_cast<int>(b);
    while((num%abc)<num){
        a++;
        float c=pow(10,a);
        abc=static_cast<int>(c);
        flag_a++;
    }
    cout<<"(num/pow) :- "<<(num%abc)<<endl;
    cout<<"flag_a :- "<<flag_a<<endl;
    cout<<"a :- "<<a<<endl;
    cout<<b<<endl;
    cout<<abc<<endl;
    cout<<"size of b :-"<<sizeof(b)<<endl;
    cout<<"size of pow :- "<<sizeof(abc)<<endl;
    return 0;
}