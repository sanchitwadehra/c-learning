#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float num;
    cout<<"Enter a Multi-digit number :- \n";
    cin>>num;
    bool flag=1;
    for(float a=2;a<=sqrt(num);a++){//sqrt() is used here as if a number has factor until sqrt of it 
    //then the factor after sqrt is actually a multiple of that first factor
        if(remainder(num,a)==0){//% operator doesn't work in case of float values
            cout<<"Non-Prime\n";
            flag=0;/*Unique way to know weather a If statement was executed or not*/
            break;
        }
    }
    if(flag==1){
        cout<<"Prime\n";
    }
    /* pow() is to be used instead of ^ as ^ is XOR operator
    and pow() returns float and hence % can't be used as it doesn't work
    with float category instead for float we have remainder(numenator/denominator) */
    
    //So we will first count number of digits
    int num_int=static_cast<int>(num);
    int flag_a=1;
    int a=1;
    float b=pow(10,a);
    int abc=static_cast<int>(b);
    /*static_cast explained :- 
    https://stackoverflow.com/questions/103512/why-use-static-castintx-instead-of-intx
    */
    while((num_int%abc)<num_int){
        a++;
        float c=pow(10,a);
        abc=static_cast<int>(c);
        flag_a++;
    }
    cout<<"Amount of digits in number :-"<<flag_a<<endl;
return 0;
}