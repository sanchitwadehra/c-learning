#include<stdio.h>
int main(){
    int n,c;
    printf("Enter the size of array you want :- \n");
    scanf("%d",&n);
    int a[n],z=1;
    printf("Enter " "%d" " values into the Array :- \n",n);
    for(int i=1;i<=(n);i++){
        //printf("Testing loop count");
        scanf("%d",&a[(i-1)]);
    }
    
    printf("Values of the Array entered are as follows :- \n");
    for(int i=1;i<=(n);i++){
        printf("%d \n",a[(i-1)]);
    }
    
    //To find the smallest value in Array
    for(int i=1;i<=(n);i++){
        (a[z]>=a[(i-1)])?(z=(i-1)):(z=z);
    }
    printf("The smallest value in array is :- ""%d""\n",a[z]);


    //To sort in ascending order :-
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

    printf("array after arranging in ascending order :- \n");
    for(int i=1;i<=(n);i++){
        printf("%d \n",a[(i-1)]);
    }

    return 0;
}