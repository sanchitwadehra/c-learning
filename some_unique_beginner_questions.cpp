#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float num;
    cout << "Enter a Multi-digit number :- \n";
    cin >> num;
    bool flag = 1;
    for (float a = 2; a <= sqrt(num); a++)
    { // sqrt() is used here as if a number has factor until sqrt of it
        // then the factor after sqrt is actually a multiple of that first factor
        if (remainder(num, a) == 0)
        { //% operator doesn't work in case of float values
            cout << "Non-Prime\n";
            flag = 0; /*Unique way to know weather a If statement was executed or not*/
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Prime\n";
    }
    /* pow() is to be used instead of ^ as ^ is XOR operator
    and pow() returns float and hence % can't be used as it doesn't work
    with float category instead for float we have remainder(numenator/denominator) */

    // So we will first count number of digits
    int number, f1, r, counter, rev_counter, n_count, num_out;
    float rv1, rv2;
    number = static_cast<int>(num);
    f1 = 0;
    n_count = 1;
    num_out = 0;
    rv1 = pow(10, n_count);
    counter = static_cast<int>(rv1);
    /*static_cast explained :-
https://stackoverflow.com/questions/103512/why-use-static-castintx-instead-of-intx
*/
    while ((number % counter) < number)
    {
        n_count++;
        rv1 = pow(10, n_count);
        counter = static_cast<int>(rv1);
        f1++;
    }
    /*cout<<"in-between n-count :-"<<n_count<<endl;
    cout<<"in-between f1 :-"<<f1<<endl;
    cout<<"in-between counter :-"<<counter<<endl;*/
    while (number >= 1)
    {
        r = (number % 10);
        number = number - r;
        number = number / 10;
        rv2 = pow(10, (n_count - 1));
        rev_counter = static_cast<int>(rv2);
        num_out = ((r * rev_counter) + num_out);
        f1--;
        n_count--;
    }
    cout << "Reversed number :- " << num_out << endl;
    // cout<<"final f1 :-"<<f1<<endl;

    // To find a Armstrong number
    int lastdigit, cubed_int, sum;
    float cubed;
    f1 = 0;
    sum = 0;

    number = num;
    while (number >= 1)
    {
        lastdigit = (number % 10);
        cubed = pow(lastdigit, 3);
        cubed_int = static_cast<int>(cubed);
        sum = cubed_int + sum;
        number = number - lastdigit;
        number = number / 10;
        f1++;
    }
    /*cout<<f1<<endl;
    cout<<sum<<endl;
    cout<<num<<endl;
    cout<<number<<endl;*/
    if (sum == num)
    {
        cout << "It's an Armstrong number" << endl;
    }
    else
    {
        cout << "No It's not a armstrong number" << endl;
    }

    /*
    Solving :- e^x = 1 + x +x^2/(2!) + x^3/(3!) ....


    #include<stdio.h>
    #include<math.h>
    int main(){
    int n,x,k,num,a;
    float final,sum,term;
    printf("We are solving e^x = 1 + x +x^2/(2!) + x^3/(3!) ....");
    printf("Enter the value of x :- \n");
    scanf("%d",&x);
    printf("How many terms of the given above formula do you want to calculate :- \n");
    scanf("%d",&n);
    printf("\n\n");
    k=(n-1);
    sum=0;
    for(int i=1;i<=k;i++){
        a=1;
        num=pow(x,i);
        for(int j=1;j<=i;j++){
            a=a*((float)j);
        }
        term=(float)(((float)num)/((float)a));
        sum=sum+term;
    }
    final=sum+1;
    printf("So e^%d = 1 + %d +%d^2/(2!) + %d^3/(3!) .... \n",x,x,x,x);
    printf("Calculated till n terms is :- \n");
    printf("%f",final);
    return 0;
    }*/

    /*
    #include<stdio.h>
#include<math.h>
int main(){
    int ul,ll,ip,f,op,nd,temp,sum,copy,extra;
    printf("To find Armstrong numbers between 2 numbers \n");
    printf("Enter the lower Limit :- \n");
    scanf("%d",&ll);
    printf("Enter the Upper Limit :- \n");
    scanf("%d",&ul);
    printf("The Armstrong numbers between them are :- \n");
    for(int j=ll;j<=ul;j++){
        ip=j;
        copy=ip;
        f=0;
        while(ip>=1){
            ip=ip/10;
            f++;
            //printf("%d",f);
        }
        nd=f;
        ip=copy;
        sum=0;
        //printf("ND - %d \n",nd);
        for(int i=1;i<=nd;i++){
            temp=ip%10;
            //printf("temp in loop - %d \n",temp);
            //printf("%d",ip);
            extra=round((pow(5,3)));
            //printf("extra in loop - %d \n",extra);
            sum=sum+round(pow(temp,nd));
            //printf("sum in loop - %d \n",sum);
            ip=ip/10;
            //printf("ip in lp %d\n",ip);
        }
        //printf("sum out loop %d \n",sum);
        //printf("copy out loop %d \n",copy);
        if(sum==copy){
            printf("%d \n",sum);
        }
    }
    return 0;
}
/*
The function pow() returns a double.
You're assigning it to variable a, of type int.
Doing that doesn't "round off" the floating point value,
it truncates it. So pow() is returning something like 99.99999... for 10^2, and
then you're just throwing away the .9999... part. Better to say a = round(pow(10, i)).
*/

    return 0;
}