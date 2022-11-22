#include <stdio.h>
int main()
{
    int n, c, ip, j = 1, k, t_1 = 0;
    printf("Enter the size of array you want :- \n");
    scanf("%d", &n);
    int a[n], z = 1;
    printf("Enter "
           "%d"
           " values into the Array :- \n",
           n);
    for (int i = 1; i <= (n); i++)
    {
        /*printf("Testing loop count " "%d""\n",j);
        j++;*/
        scanf("%d", &a[(i - 1)]);
    }

    // To print the array
    printf("Values of the Array entered are as follows :- \n");
    for (int i = 1; i <= (n); i++)
    {
        printf("%d \n", a[(i - 1)]);
    }

    // To find the smallest value in Array :-
    for (int i = 1; i <= (n); i++)
    {
        (a[z] >= a[(i - 1)]) ? (z = (i - 1)) : (z = z);
    }
    printf("The smallest value in array is :- "
           "%d"
           "\n",
           a[z]);

    // To sort in ascending order :-
    for (int i = 1; i <= (n); i++)
    {
        for (int j = i; j <= (n - 1); j++)
        {
            if (a[(i - 1)] <= a[j])
            {
                a[(i - 1)] = a[(i - 1)];
            }
            else
            {
                c = a[j];
                a[j] = a[(i - 1)];
                a[(i - 1)] = c;
            }
        }
    }

    // To print the array
    printf("array arranged in ascending order :- \n");
    for (int i = 1; i <= (n); i++)
    {
        printf("%d \n", a[(i - 1)]);
    }

    // To find duplicates in the array :-
    printf("The repetitions in Array are :- \n");
    for (int i = 1; i <= n; i++)
    {
        c = 0;
        k = 0;
        // Counting mechanism of repeated items in array
        for (int j = 1; j <= n; j++)
        {
            if (a[i - 1] == a[j - 1])
            {
                k++;
            }
        }
        if (k > 1)
        {
            t_1++;
        }
        else
        {
            printf("%d "
                   "is repeated %d times \n",
                   a[i - 1], k);
        }
        if (t_1 == k)
        {
            t_1 = 0;
            printf("%d "
                   "is repeated %d times \n",
                   a[i - 1], k);
        }
    }

    // To search an element
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