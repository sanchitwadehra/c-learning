#include<stdio.h>
#include<math.h>
int main(){
    int n,x,k,a=1;
    float final,sum,num,term;
    printf("We are solving e^x = 1 + x +x^2/(2!) + x^3/(3!) ....");
    printf("Enter the value of x :- \n");
    scanf("%d",&x);
    printf("How many terms of the given above formula do you want to calculate :- \n");
    scanf("%d",&n);
    printf("\n\n");
    k=(n-1);
    sum=0;
    for(int i=1;i<=k;i++){
        num=pow(x,i);
        for(int j=1;j<=i;j++){
            a=a*j;
            printf("%d \n",a);
        }
        printf("%d \n",a);
        printf("%d \n",num);
        term=(float)(num/a);
        sum=sum+term;
    }
    final=sum+1;
    printf("So e^%d = 1 + %d +%d^2/(2!) + %d^3/(3!) .... \n",x,x,x,x);
    printf("Calculated till n terms is :- \n");
    printf("%f",final);
    return 0;
}