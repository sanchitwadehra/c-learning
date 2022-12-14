#include<stdio.h>
#include<string.h>
int main(){
  int a;
  printf("Enter the size of array you want :- \n");
  scanf("%d",&a);
  int b[a];
  int *p;
  p=b;
  //printf("%d",p);
  printf("Enter the values :- \n");
  for(int i=0;i<a;i++){
    scanf("%d",p);
    //p is used here instead of *p
    //because it is a replacement for &a and not a
    //think about below situation
    //scanf("%d",*p);
    //this won't run 
    //think about it with free mind and you will understand
    p++;
  }
  p=b;
  printf("The entered array is:- \n");
  for(int i=0;i<a;i++){
    printf("%d \n",*p);
    p++;
  }
  //Printing in reverse order
  p--;
  printf("Printing the array in reverse order :- \n");
  for(int i=0;i<a;i++){
    printf("%d \n",*p);
    //because from last print the address
    //in p is of the last storage box of the array
    p--;
  }
  //printing the addition of all elements
  printf("Printing the addition of all elements :- \n");
  p++;
  int c=0;
  //now address of p is on the first element
  for(int i=0;i<a;i++){
    c=c+*p;
    p++;
  }
  printf("%d \n",c);
  p--;
  //now p is on the last element
  int *q;
  q=b;
  p=b;
  //now p & q are on the first element
  //an extra varibale for performing swapping
  for(int i=0;i<a;i++){
    if(*p<*q){
      p=q;
    }
    q++;
  }
  printf("The maximum among them is :- \n");
  printf("%d",*p);
  return 0;
}