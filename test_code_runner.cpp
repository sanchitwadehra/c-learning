#include<stdio.h>
int main(){
    int i,n;
    float x,sum=1;
    printf("Enter the value opf x :- \n");
    scanf("%d",&x);
    printf("Enter the value of n :- \n");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        float p=1;
        float f=1;
        for(int j=1;j<=i;j++){
            p=p*x;
            f=f*j;
        }
        sum=sum+(float)(p/f);
    }
    printf("The exponential value of %f=%.4f \n",x,sum);
    return 0;
}