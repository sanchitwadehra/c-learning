#include<stdio.h>
int main(){
    int n,c,j=1;
    printf("Enter the size of array you want :- \n");
    scanf("%d",&n-1);
    int a[n-1],z=1;
    printf("Enter " "%d" " values into the Array :- \n",n);
    for(int i=0;i<=(n-1);i++){
        /*printf("Testing loop count " "%d""\n",j);
        j++;*/
        scanf("%d",&a[(i)]);
    }
    
    printf("Values of the Array entered are as follows :-");
    for(int i=0;i<=(n-1);i++){
        printf("%d \n",a[(i)]);
    }
    
    //To find the smallest value in Array :-
    for(int i=0;i<=(n-1);i++){
        (a[z]>=a[(i-1)])?(z=(i)):(z=z);
    }
    printf("The smallest value in array is :- ""%d""\n",a[z]);


    //To sort in ascending order :-
    for(int i=0;i<=(n-1);i++){
        for(int j=i;j<=(n-1);j++){
            if(a[(i)]<=a[j]){
                a[(i)]=a[(i)];
            }
            else{
                c=a[j];
            a[j]=a[(i)];
            a[(i)]=c;
            }
        }
    }

    printf("array arranged in ascending order :-");
    for(int i=0;i<=(n-1);i++){
        printf("%d \n",a[(i)]);
    }

    return 0;
}