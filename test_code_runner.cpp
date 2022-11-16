#include<stdio.h>
#include<math.h>
int max(int num1,int num2){
    return(num1>=num2)?num1:num2;
}
int main(){
    int a,b,c,d,e,f,i,j;
    char ip;
    printf("Enter rows of 1st array u want :- \n");
    scanf("%d",&a);
    printf("Enter coloumns of 1st array u want :- \n");
    scanf("%d",&b);
    int arr_1[a][b];
    printf("Enter the values into array :- \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&arr_1[i][j]);
        }
        printf("\n");
    }
    printf("The entered array is :- \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d ",arr_1[i][j]);
        }
        printf("\n");
    }
    printf("Enter rows of 2nd array u want :- \n");
    scanf("%d",&c);
    printf("Enter coloumns of 2nd array u want :- \n");
    scanf("%d",&d);
    int arr_2[c][d];
    printf("Enter the values into array :- \n");
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            scanf("%d",&arr_2[i][j]);
        }
        printf("\n");
    }
    printf("Going to perform Addition of Matrix \n");
    if(a==c && b==d){
        e=a;
        f=b;
        int arr_3[e][f];
        for(i=0;i<e;i++){
          for(j=0;j<f;j++){
            arr_3[i][j]=arr_1[i][j]+arr_2[i][j];
            }
        }
        printf("Array after addition :- \n ");
        for(i=0;i<e;i++){
          for(j=0;j<f;j++){
            printf("%d ",arr_3[i][j]);
          }
          printf("\n");
        }
    }
    else{
        printf("The Matrix size is not same \n");
    }
    return 0;
}