#include<stdio.h>
#include<string.h>
int *fib(int);
int main(){
  int a;
  printf("Eneter the number of terms you want the fib series till:- \n");
  scanf("%d",&a);
  int *p;
  p=fib(a);
  printf("Address after function %d \n",p);
  printf("Printing it now :- \n");
  for(int i=0;i<a;i++){
    printf("%d \n",*p);
    p++;
  }
  return 0;
}
int *fib(int n){
  int a[n];
  a[0]=0;
  printf("%d \n",a[0]);
  a[1]=1;
  printf("%d \n",a[1]);
  for(int i=2;i<n;i++){
    a[i]=a[i-1]+a[i-2];
    printf("%d \n",a[i]);
  }
  int *s;
  s=a;
  printf("Address in function %d %d\n",s, *s);
  for(int i=0;i<n;i++){
    printf("%d \n",*s);
    s++;
  }
  s=a;
  return s;
}

/*IMPORTANT : IT WORKS PROPERLY IF WE TAKE STATIC INT ARRAY
#include<stdio.h>
#include<string.h>
int *fib(int);
int main(){
  int a,i=0;
  printf("Eneter the number of terms you want the fib series till:- \n");
  scanf("%d",&a);
  int *p;
  p=fib(a);
  printf("Address after function %ls \n",p);
  printf("%d \n",*p);
  printf("Printing it now :- \n");
  
  while(i<a){
     // printf("%d \n",p+i);
       printf("%d \n",*(p+i));
       i++;
     // p++;
  }
  return 0;
}
int *fib(int n){
 static int a[5];
  a[0]=0;
  printf("%d \n",a[0]);
  a[1]=1;
  printf("%d \n",a[1]);
  for(int i=2;i<n;i++){
    a[i]=a[i-1]+a[i-2];
    printf("%d \n",a[i]);
  }
  int *s;
  s=a;
  for (int k=0;k<5; k++)
  {
      printf("%d\n",*s);
      s++;
  }
 
 s=a;
  
 
  return s;
}
*/