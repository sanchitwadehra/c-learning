#include<stdio.h>
int main()
{
    int j;
    printf("Testing");
    int i=1;
    a:{
        i++;
    }

    if(i<=10){
        j=2*i;
        printf("%d",j);
        goto a;
    }
    return 0;
}