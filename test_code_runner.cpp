#include<stdio.h>
int main(){
    int n,c;
    printf("Enter the size of array you want :- ");
    scanf("%d",&n);
    int a[n],z=1;
    printf("Enter " "%d" " values into the Array :- ",n);
    for(int i=1;i<=(n);i++){
        scanf("%d \n",&a[(i-1)]);
    }
/*
    printf("Values of the Array entered are as follows :-");
    for(int i=1;i<=(n);i++){
        printf("%d \n",a[(i-1)]);
    }

    for(int i=1;i<=(n);i++){
        (a[z]>=a[(i-1)])?(z=(i-1)):(z=z);
    }
    printf("The smallest value in array is :- ""%d",a[z]);
*/
    for(int i=1;i<=(n);i++){
        for(int j=i;j<=(n-1);j++){
            if(a[(i-1)]<=a[j]){
                a[(i-1)]=a[(i-1)];
            }
            else{
                c=a[j];
            a[j]=a[(i-1)];
            a[(i-1)]=c;
            }
        }
    }

    printf("Values of the Array entered are as follows :-");
    for(int i=1;i<=(n);i++){
        printf("%d \n",a[(i-1)]);
    }

    return 0;
}