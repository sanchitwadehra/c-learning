#include<stdio.h>
#include<string.h>
int main(){
  int a;
  a=5;
  int b[5]={1,215,15,2,8};
  int *p;
  int *q;
  //2 bytes for pointers is 16bit Processor
  //4 bytes for poimters in 32bit Processor
  //8 bytes for pointers in 64bit Processor
  p=&a;
  p=b;
  //No need of p=&b[0];
  //it is be default taking the first address
  //without "&" but just in case of array and strings
  /*Error given :-
  q=a;
  printf("%d \n",q);
  */
  /*
  char *s;
  s=&a;
  you can't assign char pointer to a int address it will give runtime 
  printf("%d \n",s);
  */
  printf("%d \n",p);
  printf("%d \n",a);
  printf("%d \n",&a);
  printf("%d \n",*p);
  a++;
  printf("%d \n",a);
  p++;
  printf("%d \n",p);
  printf("%d \n",*p);
  printf("%d \n",&a);
  printf("%d \n",sizeof(p));
  return 0;
}