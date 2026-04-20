#include<stdio.h>
int main(){
    int arr[10],n;
    printf("pls enetr the array elements\n");
    scanf("%d",&n);
        for (int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for ( int i=0;i<n;i++){
            printf("%d",arr[i]); }
            return 0;
}

