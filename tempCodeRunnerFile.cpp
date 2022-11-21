#include<stdio.h>
int add(int i,int j){
    return (i+j);
}
int subtract(int i,int j){
    return (i-j);
}
int division(int i,int j){
    return (i/j);
}
int multiply(int i,int j){
    return (i*j);
}
int main(){
    int a,b,c,d,e,f;
    printf("Enter a &b :- \n");
    scanf("%d%d",&a,&b);
    printf("Addition :- \n");
    c=add(a,b);
    printf("%d",c);
    printf("\n Subtraction :- \n");
     d=subtract(a,b);
    printf("%d",d);
    printf(" \n Multiplication :- \n");
     e=multiply(a,b);
    printf("%d",e);
    printf("\n Division :- \n");
     f=division(a,b);
    printf("%d",f);
    return 0;
}