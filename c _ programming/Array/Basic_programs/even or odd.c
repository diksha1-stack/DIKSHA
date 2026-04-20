#include<stdio.h>
int main(){
    int a[5],i, even=0,odd=0;
    printf("enetr the elemnets");
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
        if (a[i]%2==0){
            even+=1;}
        else{
            odd++;
        }
    }
    printf("even number are :%d",even);
    printf("odd numbers are :%d",odd);
    return 0;
}