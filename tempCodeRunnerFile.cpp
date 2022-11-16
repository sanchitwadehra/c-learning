#include<stdio.h>
int main(){
    char ip;
    printf("do you still want to go ahead(y/n) :- \n");
        scanf("%c",&ip);
        if(ip=='y'){
            printf("ok yes");
        }
        else{
            printf("ok no");
        }
    return 0;
}