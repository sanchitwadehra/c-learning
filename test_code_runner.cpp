#include <stdio.h>
int fact(int);
int main()
{
    int num,res;
    printf("Enter number :- \n");
    scanf("%d",&num);
    res=fact(num);
    printf("%d",res);
    return 0;
}
int fact(int num){
    if(num==1){
        return 1;
    }
    else{
        return (num*fact((num-1)));
    }
}