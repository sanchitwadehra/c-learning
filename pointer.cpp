#include<stdio.h>
#include<string.h>
int main(){
  int a;
  a=5;
  int *p;
  //2 bytes for pointers is 16bit Processor
  //4 bytes for poimters in 32bit Processor
  //8 bytes for pointers in 64bit Processor
  p=&a;
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