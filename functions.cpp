#include <iostream>
#include <cmath>
using namespace std;
/*
#include<algorithm> allows you to use max() function to find biggest number among two
by default it is a inbuilt function in <algorithm> header file
*/
// void means null so there is
// nothing written in return statement
void primes_between(int num1, int num2)
{
    int b;
    cout << "The prime numbers between them are :- " << endl;
    for (int a = num1; a <= num2; a++)
    {
        for (b = 2; b <= a; b++)
        {
            if (a % b == 0)
            {
                break;
            }
        }
        if (b == a)
        {
            cout << b << endl;
        }
    }
    return;
}

void fibonacci_between(int num1, int num2)
{
    int a, b, c, f1;
    a = 0;
    b = 1;
    cout << "The fibonacci numbers till " << num2 << "th position are :-" << endl;
    cout << a << endl;
    cout << b << endl;
    f1 = 0;
    while (f1 <= num2)
    {
        c = a + b;
        cout << c << endl;
        ;
        a = b;
        b = c;
        f1++;
    }
    return;
}

void factorial(int num1, int num2)
{
    int out;
    cout << "The factorial of " << num2 << " is :-" << endl;
    out = num2;
    while (num2 >= 2)
    {
        num2--;
        out = out * num2;
    }
    cout << out << endl;
}

int main()
{
    int a, b, c;
    cout << "Enter first number :-\n";
    cin >> a;
    cout << "Enter second number :-\n";
    cin >> b;
    /*cout<<"The prime numbers between them is :- "<<print_prime(a,b)<<endl;
    This would have been wrong it is a function just like
    if statement ,while statement ,etc. */
    if (a >= b)
    {
        c = a;
        a = b;
        b = c;
        cout << "The numbers have been arranged in ascending order :-" << endl;
        cout << a << endl;
        cout << b << endl;
    }
    primes_between(a, b);
    fibonacci_between(a, b);
    factorial(a, b);
    return 0;
}

/*


Function Declaration :-
return_type function_name(argument list);

Function calling :-
function_name(argument);

function definition:-
return_type function_name(argument list)
{
    function body;
}

4 types of function:-

1) function without return_type and without argument;
void add();
int main(){
    add();
    return 0;
}
void add(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}
2) function without return_type and with argument;
void add(int,int);
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
void add(int x,int y){
    int c;
    c=x+y;
    printf("%d",c);
}
3) function with return_type and without argument;
int add();
int main(){
    int d;
    d=add();
    printf("%d",c);
    return 0;
}
int add(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
4) function with return_type and with argument;
int add(int,int);
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("%d",c);
    return 0;
}
int add(int x,int y){
    return (x+y);
}

*/