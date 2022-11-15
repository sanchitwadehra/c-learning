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
        }
        nd=f;
        ip=copy;
        sum=0;
        for(int i=1;i<=nd;i++){
            temp=ip%10;
            extra=round((pow(5,3)));
            sum=sum+round(pow(temp,nd));
            ip=ip/10;
        }
        if(sum==copy){
            printf("%d \n",sum);
        }
    }
    return 0;
}