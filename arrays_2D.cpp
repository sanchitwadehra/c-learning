#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("Enter rows of array u want :- \n");
    scanf("%d",&a);
    printf("Enter coloumns of array u want :- \n");
    scanf("%d",&b);
    int arr[a][b];
    printf("Enter the values into array :- \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("The entered array is :- \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}