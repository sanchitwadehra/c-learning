#include<stdio.h>
int main(){
    /*for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }*/
    int year;
    printf("Enter a year :- \n");
    scanf("%d",&year);
    
    if(year%400 == 0){
        printf("%d is a leap year\n",year);
    }
    else if(year%100 == 0){
        printf("%d isn't a leap year\n",year);
    }
    else if(year%4 == 0){
        printf("%d is a leap year\n",year);
    }
    else{
        printf("%d isn't a leap year\n",year);
    }
    return 0;
}