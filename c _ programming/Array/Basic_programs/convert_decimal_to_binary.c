#include<stdio.h>
int main(){int n;
    printf("enetr the size");
    scanf("%d",&n);
    int a[n],i;
    
    while(n>0){
        
        a[i]=n%2;
        n=n/2;
        i++;
    }
for(int j=i-1;j>0;j--){
    printf("%d",a[j]);
}
    

}