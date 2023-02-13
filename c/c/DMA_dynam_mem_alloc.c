//IMPORTANT :- DON'T FORGET TO free(ptr) TO DEALLOCATE THE MEMORY ASSIGNED TO A POINTER IN THE PROGRAM OR ELSE IT WILL BE PERMANENTLY USED
//USE ONLY .C AND NOT .CPP AS THIS FUNCTIONALITY IS ONLY IN C
//SO RUN IT FOR EXPERIMENTATION ONLY ON ONLINE COMPILERS
#include<stdio.h>
int main (){
    int *ptr,n;
    char a;
    printf("Enter the number of characters in initial input of a string :- \n");
    scanf("%d",&n);
    printf("Malloc allocation is the next step \n");
    ptr=(char *)malloc(n*sizeof(char));
    /*
    int d;
    scanf("%d",&d);
    */
    printf("going to enter loop of intake \n");
    for(int i=0;i<n;i++){
        scanf("%c",&a);
        *ptr=a;
        ptr++;
        printf("testing \n");
    }
    for(int i=0;i<n;i++){
        printf("%c",*ptr);
        ptr--;
    }
    free(ptr);
    return 0;
}