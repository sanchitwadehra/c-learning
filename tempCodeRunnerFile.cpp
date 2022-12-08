#include <stdio.h>
int main()
{
    int a, b, c, i, j;
    printf("Enter rows of array :- \n");
    scanf("%d", &a);
    printf("Enter coloumns of array :- \n");
    scanf("%d", &b);
    int  arr[a][b];
    printf("Enter the values into array :- \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", & arr[i][j]);
        }
        printf("\n");
    }
    printf("array that you entered is :- \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d ",  arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<a;i++){
        c=arr[i][b-i-1];
        arr[i][b-i-1]=arr[i][i];
        arr[i][i]=c;
    }
    printf("After Changing the Diagonals the array is :- \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d ",  arr[i][j]);
        }
        printf("\n");
    }
}