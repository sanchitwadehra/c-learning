//WAP TO SWAP FIRSAT AND LAST DIGIT OF ANY NUMBER
#include<iostream>
using namespace std;
int main(){
    int n,copy,count;
    cout<<"Enter the number : - "<<endl;
    cin>>n;
    copy=n;
    //cout<<copy<<endl;
    count=0;
    while(copy!=0){
        copy=copy/10;
        count++;
    }
    //cout<<"intitial"<<count<<endl;
    int a[count];
    int b=count;
    count=0;
    int rem;
    while(n!=0){
        rem=n%10;
        n=n/10;
        count++;
        //cout<<"testing"<<count<<endl;
        a[b-count]=rem;
    }
    int temp;
    temp=a[0];
    a[0]=a[count-1];
    a[count-1]=temp;
    cout<<"After swapping the number is :- "<<endl;
    for(int i=0;i<=count-1;i++){
        cout<<a[i];
    }
    return 0;

}