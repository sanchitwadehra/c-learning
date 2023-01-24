#include<stdio.h>
int main(){
    int a=32;
    int *p;
    p=&a;
    printf("%d \n",a);
    printf("%d \n",&a);
    printf("%d \n",&a+1);
    printf("%x \n",&a+1);
    printf("%p \n",&a);

    printf("%x \n",p);
    return 0;
}