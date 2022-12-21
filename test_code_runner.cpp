#include <stdio.h>
#include <string.h>
int sglen(char s1[])
{
    int c = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        c++;
    }
    return c;
}
void sgrev(char s1[])
{
    char s2[100];
    for (int i = 0; s1[i] != '\0'; i++)
    {
        s2[(sglen(s1)) - 1 - i] = s1[i];
    }
    printf("String Reverse = ");

    fputs(s2, stdin);
}
void sgcat(char s2[], char s1[])
{
    int i, j;
    char s3[(sglen(s1)) + (sglen(s2)) + 1];
    for (i = 0; s1[i] != '\0'; i++)
    {
        s3[i] = s1[i];
    }
    for (j = 0; s2[j] != '\0'; j++)
    {
        s3[(sglen(s1)) + j] = s2[j];
    }
    s3[i + j] = '\0';
    puts(s3);
    // fputs(s3,stdin);
}
int main()
{
    int a, b;
    char s1[100];
    char s2[100];
    printf("Enter a string.\n");
    gets(s1);
    // scanf("%s",s1);
    //  strlen(),strrev(),strcat(),strcpy(),strupr(),strlwr(),strcmp()
    printf("Enter the operation you wish to perform on the string:\n1. String Length\n2. String Reverse\n3. String Concatenation\n4. String Copy\n5. String Upper Case\n6. String Lower Case\n7. String Comparison\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    {
        b = sglen(s1);
        printf("String Length = %d", b);
        break;
    }
    case 2:
    {
        sgrev(s1);
        break;
    }
    case 3:
    {
        char c;
        printf("Enter the target string.\n");
        scanf("%c", &c);
        gets(s2);
        puts(s2);
        // fgets(s2,sizeof(s2),stdin);
        // scanf("%s",s2);
        sgcat(s2, s1);
        break;
    }
    case 4:
    {
        strcpy(s2, s1);
        printf("Copied String - %s", s2);
        break;
    }
    case 5:
    {
        printf("The Upper Case of String is %s", strupr(s1));
        break;
    }
    case 6:
    {
        printf("The Lower Case of String is %s", strlwr(s1));
        break;
    }
    case 7:
    {
        printf("Enter the string you wish to compare with the previous string.\n");
        scanf("%s", s2);
        a = strcmp(s1, s2);
        // returns -1 for not same , 0 for exactly same
        // and 1 for same but difference of upper case lower case
        printf("String Compare %d", a);
        break;
    }
    default:
    {
        printf("You have not entered a valid option.");
    }
    }
    return 0;
}
