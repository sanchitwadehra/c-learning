#include<iostream>
using namespace std;

int main(){
int num;
cout<<"Enter a number :-\n";
cin>>num;
for(int a=1;a<=num;a++){
    for(int b=1;b<=(num);b++){
        cout<<"* ";
    }
    cout<<endl;
}
cout<<endl;
for(int c=1;c<=num;c++){
    for(int d=1;d<=num;d++){
        if(c==1 || d==1 || c==num || d==num){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
cout<<endl;
for(int e=num;e>=1;e--){
    for(int f=1;f<=e;f++){
        cout<<"* ";
    }
cout<<endl;
}
cout<<endl;
for(int g=1;g<=num;g++){
    for(int h=1;h<=(num-g);h++){
        cout<<"  ";
    }
    for(int i=1;i<=g;i++){
        cout<<"* ";
    }
    cout<<endl;
}
cout<<endl;
for(int j=1;j<=num;j++){
    for(int k=1;k<=j;k++){
        cout<<j<<" ";
    }
    cout<<endl;
}
cout<<endl;
int l=1;
for(int m=1;m<=num;m++){
    for(int n=1;n<=m;n++){
        cout<<l<<" ";
        l++;
    }
    cout<<endl;
}
cout<<endl;
for(int o=1;o<=num;o++){
    for(int p=1;p<=o;p++){
        cout<<"* ";
    }
    for(int q=1;q<=(2*num-2*o);q++){
        cout<<"  ";
    }
    for(int r=1;r<=o;r++){
        cout<<"* ";
    }
    cout<<endl;
}
for(int s=num;s>=1;s--){
    for(int t=1;t<=s;t++){
        cout<<"* ";
    }
    for(int u=1;u<=(2*num-2*s);u++){
        cout<<"  ";
    }
    for(int v=1;v<=s;v++){
        cout<<"* ";
    }
    cout<<endl;
}
cout<<endl;
for(int w=num;w>=1;w--){
    for(int x=1;x<=w;x++){
        cout<<x<<" ";
    }
    cout<<endl;
}
cout<<endl;
for(int y=1;y<=num;y++){
    for(int z=1;z<=y;z++){
        if((y+z)%2==0){
            cout<<"1 ";
        }
        else{
            cout<<"0 ";
        }
    }
    cout<<endl;
}
cout<<endl;
for(int aa=num;aa>=1;aa--){
    for(int ab=aa;ab>=1;ab--){
        cout<<"  ";
    }
    for(int ac=1;ac<=num;ac++){
        cout<<"* ";
    }
    cout<<endl;
}
cout<<endl;
for(int ad=1;ad<=num;ad++){
    for(int ae=(num-ad);ae>=1;ae--){
        cout<<" ";
    }
    for(int af=1;af<=ad;af++){
        cout<<af<<" ";
    }
    cout<<endl;
}
cout<<endl;
for(int ag=1;ag<=num;ag++){
    for(int ah=(num-ag);ah>=1;ah--){
        cout<<"  ";
    }
    for(int ai=ag;ai>=1;ai--){
        cout<<ai<<" ";
    }
    for(int aj=1;aj<ag;aj++){
        cout<<(aj+1)<<" ";
    }
    cout<<endl;
}
cout<<endl;
return 0;
}