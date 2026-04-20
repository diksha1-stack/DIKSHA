#include<stdio.h>

int main(){
    int a[5],i,j,temp;
    printf("enetr the aray");
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++){
        for (j=i+1;j<5;j++){
            if (a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;}}}
        printf("the second largest no is:\n");
        printf("%d",a[1]);
        return 0;
            }