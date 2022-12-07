#include<stdio.h>
int loop(int,int);
int main(){
    printf("Enter a number whose table you want :- \n");
    int a;
    scanf("%d",&a);
    printf("Enter the number till where you want it :- \n");
    int b;
    scanf("%d",&b);
    loop(a,b);
    return 0;
}
//This will run
int loop(int a,int b){
    if(b==0){
        return 0;
    }
        return loop(a,b-1);  
    printf("%d X %d = %d \n",a,b,a*b);
}
/*
This will run
    
         loop(a,b-1);  
printf("%d X %d = %d \n",a,b,a*b);
    
    */
/*
This will run
int loop(int a,int b){
    if(b==0){
        return 0;
    }
    else{
        return loop(a,b-1);  
        printf("%d X %d = %d \n",a,b,a*b);
    }
}
*/
/*
This will not run
int loop(int a,int b){
    if(b==0){
        return 0;
    }
    else{
        return loop(a,b-1); 
    } 
    printf("%d X %d = %d \n",a,b,a*b);
}
*/