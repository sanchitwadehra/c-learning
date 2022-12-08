/* No. - 1
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
*/
/* No. - 2
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :-\n");
    scanf("%d", &num);
    for (int a = 1; a <= num; a++)
    {
        for (int b = (num - a); b >= 1; b--)
        {
            printf("  ");
        }
        for (int c = a + 64; c >= 65; c--)
        {
            printf("%c ", c);
        }
        for (int d = 65; d < a + 64; d++)
        {
            printf("%c ", (d + 1));
        }
        printf("\n");
    }
}
*/
// No. - 3
#include<stdio.h>
int main(){
    int n,c,j=1,k,t_1=0;
    printf("Enter the size of array you want :- \n");
    scanf("%d",&n);
    int a[n],z=1;
    printf("Enter " "%d" " values into the Array :- \n",n);
    for(int i=1;i<=(n);i++){
        /*printf("Testing loop count " "%d""\n",j);
        j++;*/
        scanf("%d",&a[(i-1)]);
    }
    
    //To print the array
    printf("Values of the Array entered are as follows :- \n");
    for(int i=1;i<=(n);i++){
        printf("%d \n",a[(i-1)]);
    }

    //To sort in ascending order selection sort :-
    for(int i=1;i<=(n);i++){
        for(int j=i;j<=(n-1);j++){
            if(a[(i-1)]<=a[j]){
                a[(i-1)]=a[(i-1)];
            }
            else{
                c=a[j];
            a[j]=a[(i-1)];
            a[(i-1)]=c;
            }
        }
    }

    //To print the array
    printf("array arranged in ascending order :- \n");
    for(int i=1;i<=(n);i++){
        printf("%d \n",a[(i-1)]);
    }

    //To find duplicates in the array :-
    printf("The repetitions in Array are :- \n");
    for(int i=1;i<=n;i++){
        c=0;
        k=0;
        //Counting mechanism of repeated items in array
        for(int j=1;j<=n;j++){
            if(a[i-1]==a[j-1]){
                k++;
            }
        }
        if(k>1){
            t_1++;
        }
        else{
            printf("%d ""is repeated %d times \n",a[i-1],k);
        }
        if(t_1==k){
            t_1=0;
            printf("%d ""is repeated %d times \n",a[i-1],k);
        }
    }
    return 0;
}