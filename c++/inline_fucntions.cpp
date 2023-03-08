#include<iostream>
#include<algorithm>
using namespace std;
inline int MAX(int x,int y,int z){
    return max(max(x,y),z);
}
inline int MIN(int x,int y,int z){
    return min(min(x,y),z);
}
int main(){
    double a,b,c;
    cout<<"Enter Three Numbers :- "<<endl;
    cin>>a>>b>>c;
    cout<<"a - "<<a<<" b - "<<b<<" c - "<<c<<endl;
    cout<<"Maximum number out of these is :- "<<MAX(a,b,c)<<endl;
    cout<<"Minimum number out of these is :- "<<MIN(a,b,c)<<endl; 
    return 0;
}