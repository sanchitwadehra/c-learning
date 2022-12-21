//store 2 cars information
//make a record of a 5 students of a class storing marks information 
#include<stdio.h>
#include<string.h>
struct record
{
    int sn;
    char name[50];
    int doj;
    int sal;
};
int main(){
    int n;
    char name_s[20];
    char a;
    printf("How many data entries do you want to have for persons:- \n");
    scanf("%d",&n);
     struct record s[n];
    for(int i=0;i<n;i++){
        s[i].sn=(i+1);
        printf("Enter the name of the person number %d :- \n",(i+1));
        scanf("%c",&a);
        gets(name_s);
        strcpy(s[i].name,name_s);
        printf("Enter the date of joining :- \n");
        scanf("%d",&s[i].doj);
        printf("Enter the salary :-\n");
        scanf("%d",&s[i].sal);
    }
    printf("\n Printing the dataset entered below :- \n");
    for(int i=0;i<n;i++){
        //struct record s[i];
        printf("S.No. :- %d \n",s[i].sn);
        printf("Name :- ");
        puts(s[i].name);
        printf("DOJ :- %d \n",s[i].doj);
        printf("Salary :- %d\n",s[i].sal);
        printf("\n");
    }
    return 0;
}