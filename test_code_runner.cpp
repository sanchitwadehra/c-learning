#include <stdio.h>
#include <string.h>
int sglen(char s1[]){
    int c=0;
    for(int i=0;s1[i]!='\0';i++){
        c++;
    }
    return c;
}
char sgrev(char s1[]){
    char s2[sglen(s1)];
    for(int i=0;s1[i]!='\0';i++){
        s2[(sglen(s1))-1-i]=s1[i];
    }
    printf("String Reverse = ");
    puts(s2);
    return 0;
}
int main()
{
    int a, b;
    char s1[100], s2[100];
    printf("Enter a string.\n");
    scanf("%s", s1);
    // strlen(),strrev(),strcat(),strcpy(),strupr(),strlwr(),strcmp()
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
        printf("Enter the target string.\n");
        scanf("%s", s2);
        strcat(s2, s1);
        printf("Result - %s", s2);
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
