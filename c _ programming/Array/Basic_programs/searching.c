#include<stdio.h>
int main (){
    int a[5],n,i,element,found=0;
    printf("pls enetr the no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enetr the element to be searched");
    scanf("%d",&element);
    for (i=0;i<n;i++){
        if (a[i]==element){
            found=1;
            break;
        }}
    if (found){
        printf("found");

    }
    else{
        printf("not found");
    }
    return 0;
}