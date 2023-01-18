#include<stdio.h>
int main(){
    int a=32;
    printf("%d \n",a);
    printf("%d \n",&a);
    printf("%d \n",&a+1);
    printf("%x \n",&a+1);
    printf("%p \n",&a);
    return 0;
}