#include  <stdio.h>
int main()
{
    int n, ip;
    printf("Enter the size of array you want :- \n");
    scanf("%d", &n);
    int a[n], z = 1;
    printf("Enter "
           "%d"
           " values into the Array :- \n",
           n);
    for (int i = 1; i <= (n); i++)
    {
        scanf("%d", &a[(i - 1)]);
    }
    printf("Enter the value you want to search in the array :- ");
    scanf("%d", &ip);
    for (int i = 1; i <= n; i++)
    {
        if (ip == a[(i - 1)])
        {
            printf("Found at position number :- %d", i);
        }
    }
    return 0;
}