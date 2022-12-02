#include<stdio.h>
#include<string.h>
int main(){
    char abc[20];
    int b;
    printf("Put in  :- \n");
    gets(abc);
    b=strlen(abc);
    printf("Length is %d",b);
    return 0;
}