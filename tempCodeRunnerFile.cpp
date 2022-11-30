#include  <stdio.h>
void swap_cv(int,int);
void swap_cr(int *,int *);
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Value of a is %d and value of b is %d \n",a,b);
    swap_cv(a,b);
    printf("After using call by value function : -\n");
    printf("Value of a is %d and value of b is %d \n",a,b);
    swap_cr(&a,&b);
    printf("After using call by reference function : -\n");
    printf("Value of a is %d and value of b is %d \n",a,b);
    return 0;
}
void swap_cv(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
}
void swap_cr(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}