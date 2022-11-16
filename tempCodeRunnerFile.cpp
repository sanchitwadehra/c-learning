#include<stdio.h>
#include<math.h>
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
        //printf("ND - %d \n",nd);
        for(int i=1;i<=nd;i++){
            temp=ip%10;
            //printf("temp in loop - %d \n",temp);
            //printf("%d",ip);
            extra=round((pow(5,3)));
            //printf("extra in loop - %d \n",extra);
            sum=sum+round(pow(temp,nd));
            //printf("sum in loop - %d \n",sum);
            ip=ip/10;
            //printf("ip in lp %d\n",ip);
        }
        //printf("sum out loop %d \n",sum);
        //printf("copy out loop %d \n",copy);
        if(sum==copy){
            printf("%d \n",sum);
        }
    }
    return 0;
}
/*
The function pow() returns a double. 
You're assigning it to variable a, of type int.
Doing that doesn't "round off" the floating point value, 
it truncates it. So pow() is returning something like 99.99999... for 10^2, and 
then you're just throwing away the .9999... part. Better to say a = round(pow(10, i)).
*/