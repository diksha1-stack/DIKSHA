#include<stdio.h>
int main(){
    int a[5],i,j,temp;
    printf("enetr the aray");
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++){
        for (j=i+1;j<5;j++){
            if (a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;}}}
    printf("asscending order");
    for (i=0;i<5;i++){
        printf(" %d",a[i]);}

    for (int k=0;k<5;k++){
        for (int l=k+1;l<5;l++){
            if (a[k]<a[l]){
                temp=a[k];
                a[k]=a[l];
                a[l]=temp;}}}
    printf("decending order");
    for (int k=0;k<5;k++){
        printf(" %d",a[k]);}
     
    return 0; }
    
