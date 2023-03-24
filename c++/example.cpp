//WAP  to illustrate how constructors are implemented and the order in which they are called when classes are inherited use 3 kclasses alpha beta gamma such that alpha and beta are base classes and gamma is derived class inheriting alpha and beta pass 4 variables to gaamme class which will further  send 1 integer to alpha and 1 float variable to beta show the order of organization
#include<iostream>
using namespace std;
class alpha{
    protected:
    int i;
    public:
    alpha(){

    }
    alpha(int a){
        i=a;
        cout<<i<<endl;
    }
};
class beta{
    protected:
    float j;
    public:
    beta(){

    }
    beta(float b){
        j=b;
        cout<<j<<endl;
    }
};
class gamma:public alpha,public beta{
    protected:
    int m,n;
    public:
    gamma(int x,float y,int z,int w):alpha(x),
beta(y)
{
        m=z;
        n=w;
        cout<<m<<endl<<n<<endl;
    }
};
int main(){
    gamma g1(1,3.5,2,4);
    return 0;
}