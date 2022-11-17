#include<stdio.h>
#include<math.h>
int max(int num1, int num2)
{
    return (num1 >= num2) ? num1 : num2;
}
int main()
{
    int a, b, c, d, e, f, i, j, ip,sum;
    printf("Enter rows of 1st array u want :- \n");
    scanf("%d", &a);
    printf("Enter coloumns of 1st array u want :- \n");
    scanf("%d", &b);
    int arr_1[a][b];
    printf("Enter the values into array :- \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr_1[i][j]);
        }
        printf("\n");
    }
    printf("The entered array is :- \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d ", arr_1[i][j]);
        }
        printf("\n");
    }
    printf("Enter rows of 2nd array u want :- \n");
    scanf("%d", &c);
    printf("Enter coloumns of 2nd array u want :- \n");
    scanf("%d", &d);
    int arr_2[c][d];
    printf("Enter the values into array :- \n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < d; j++)
        {
            scanf("%d", &arr_2[i][j]);
        }
        printf("\n");
    }
    printf("The entered array is :- \n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < d; j++)
        {
            printf("%d ", arr_2[i][j]);
        }
        printf("\n");
    }
    if(b==c){
            e=a;
            f=d;
            int arr_3[e][f];
            for(i=0;i<e;i++){
                for(j=0;j<f;j++){
                    for(int k=0;k<f;k++){
                        for(int l=0;l<d;l++){
                            sum+=arr_1[i][k]*arr_2[k][l];
                        }
                    }
                    arr_3[i][j]=sum;
                }
            }
        }
        else{
            printf("The coloumns of first Matrix are not same as rows of second matrix\n");
        }
}