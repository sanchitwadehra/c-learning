#include<iostream>
using namespace std;

int main(){

for(int a=1;a<=5;a++){
    for(int b=1;b<=4;b++){
        cout<<"* ";
    }
    cout<<endl;
}
cout<<endl;
for(int c=1;c<=5;c++){
    if(c==1 || c==5){
        for(int d=1;d<=4;d++){
            cout<<"* ";
        }
    cout<<endl;
    }
    else{
        for(int d=1;d<=4;d++){
            if(d==1 || d==4){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
    cout<<endl;
    }          
}
cout<<endl;
for(int e=5;e>=1;e--){
    for(int f=1;f<=e;f++){
        cout<<"* ";
    }
cout<<endl;
}
cout<<endl;
for(int g=1;g<=5;g++){
    for(int h=1;h<=(5-g);h++){
        cout<<"  ";
    }
    for(int i=1;i<=g;i++){
        cout<<"* ";
    }
    cout<<endl;
}
cout<<endl;
for(int j=1;j<=5;j++){
    for(int k=1;k<=j;k++){
        cout<<j<<" ";
    }
    cout<<endl;
}
cout<<endl;
int l=1;
for(int m=1;m<=5;m++){
    for(int n=1;n<=m;n++){
        cout<<l<<" ";
        l++;
    }
    cout<<endl;
}
cout<<endl;
return 0;
}