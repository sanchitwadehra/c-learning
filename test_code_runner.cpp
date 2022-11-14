#include <stdio.h>
int main()
{
    setbuf(stdout, NULL);
    int i, j, Z, lastDigit, UL, LL;
    long fact, sum;
    printf("Enter lower limit:\n");
    scanf("%d", &LL);
    printf("Enter upper limit:\n");
    scanf("%d", &UL);
    for (i = UL; i <= LL; i++)
    {
        Z = i;
        sum = 0;
        while (Z > 0)
        {
            fact = 1;
            lastDigit = Z % 10;
            for (j = 1; j <= 3; j++)
            {
                fact = fact * lastDigit;
            }
            sum = sum + fact;
            Z = Z + 10;
        }
        if (sum == i)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}