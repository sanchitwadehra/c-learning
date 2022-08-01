#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"Please enter a number :- ";
cin>>n;
//syntax for "for loops" for(initialisation;condition;update){body}
int sum=0;
for(int counter=1;counter<=n;counter++)
  {
    sum=sum+counter;
  }
cout<<"sum of numbers till "<<n<<" is "<<sum<<endl;



int a;
cout<<"Please enter a numeber greater than 100 :- ";
cin>>a;
if(a>=0)
  {
        //while(condition is true){body}
        while(a<=100)
        {
        cout<<"Enter a number greater than 100:- "<<endl;
        cin>>a;
        while(a<0)
          {
           cout<<"Please add a positive number :-";
           cin>>a;
          }
        } 
  }
else 
  {
    do//do{body}while(condition)
    {
      cout<<"please add a positive number :- \n";
      cin>>a;
      if(a>=0)
        {
          while(a<=100)
            {
              if(a<0)
                {
                  cout<<"Please add a positive number :-\n";
                  cin>>a;
                  continue;//continue statement tells the compiler to skip the next commands  
                }//so here in this case if you add a negative number then compiler exits back to the starting of this do while looop 
              cout<<"Enter a number greater than 100 :-\n";  //these one are the ones skipped
              cin>>a;                                        //these one are the ones skipped
            }
        }
      else
        {
          cout<<"you added a negative number\n";
        }
    }while(a<0);
  }
cout<<"Thx for giving a number greater than 100\n";
int i;
  for(i=2;i<a;i++)
    {
      if(a%i==0)
        {
          cout<<"It is a Non Prime\n";
          break;
        }
    }
if(i==a)
  {
    cout<<"It is a Prime";
  }
return 0;
}