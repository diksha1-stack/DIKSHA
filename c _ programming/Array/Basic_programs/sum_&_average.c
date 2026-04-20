#include<stdio.h>
int main(){
    int a[5],i,n,s=0;
    float avg=0;
    printf("enetr no of elements");
    scanf("%d",&n);
    printf("enter no of elements of array");

    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        s+=a[i];
        avg=s/n;
    
        

    }
    ;
    printf("the sum of the array is %d and average is%f",s,avg);
    return 0;

    }
