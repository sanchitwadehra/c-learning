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
    /*static_cast explained :- 
    https://stackoverflow.com/questions/103512/why-use-static-castintx-instead-of-intx
    */
    int number,f1,r,counter,rev_counter,n_count,num_out;
    float rv1,rv2;
    number=static_cast<int>(num);
    f1=0;
    n_count=1;
    num_out=0;
    rv1=pow(10,n_count);
        counter=static_cast<int>(rv1);
    while((number%counter)<number){
        n_count++;
        rv1=pow(10,n_count);
        counter=static_cast<int>(rv1);
        f1++;
    }
    /*cout<<"in-between n-count :-"<<n_count<<endl;
    cout<<"in-between f1 :-"<<f1<<endl;
    cout<<"in-between counter :-"<<counter<<endl;*/
    while(number>=1){
        r=(number%10);
        number=number-r;
        number=number/10;
        rv2=pow(10,(n_count-1));
        rev_counter=static_cast<int>(rv2);
        num_out=((r*rev_counter)+num_out);
        f1--;
        n_count--;
    }
    cout<<"Reversed number :- "<<num_out<<endl;
    //cout<<"final f1 :-"<<f1<<endl;
return 0;
}