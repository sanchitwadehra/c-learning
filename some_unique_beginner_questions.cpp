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
    
return 0;
}