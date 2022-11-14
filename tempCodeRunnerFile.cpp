#include<stdio.h>
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
        printf("ND - %d \n",nd);
        for(int i=1;i<=nd;i++){
            temp=ip%10;
            printf("temp in loop - %d \n",temp);
            //printf("%d",ip);
            extra=(pow(5,3));
            printf("extra in loop - %d \n",extra);
            sum=sum+pow(temp,nd);
            printf("sum in loop - %d \n",sum);
            ip=ip/10;
            //printf("ip in lp %d\n",ip);
        }
        printf("sum out loop %d \n",sum);
        printf("copy out loop %d \n",copy);
        if(sum==copy){
            printf("%d \n",sum);
    int n,x,k,num,a;
    float final,sum,term;
    printf("We are solving e^x = 1 + x +x^2/(2!) + x^3/(3!) ....");
    printf("Enter the value of x :- \n");
    scanf("%d",&x);
    printf("How many terms of the given above formula do you want to calculate :- \n");
    scanf("%d",&n);
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
    printf("Calculated till %d terms is :- \n",n);
    printf("%f",final);
    return 0;
}
