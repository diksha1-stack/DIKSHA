#include<stdio.h>
#include<conio.h>
int main (){
    int a[10],n,i,min,max;
    printf("pls enetr the number");
    scanf("%d",&n);
    printf("pls entr the elements of array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    min=a[0];
    max=a[0];
    for (i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }

    }
    printf("minimun numberis%d and maximum number is %d",min,max);
    return 0;
}