/* Right-Aligned Character Pyramid (Literal 'j' Output) */

/* #include<stdio.h>
int main(){
    int i ,j;
    for (i=1 ;i<=5; i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf(" ");}
        for (j=1;j<=i;j++)
        {
            printf("j" );
        }
    printf("\n");
    }
} */

/* 2. Right-Aligned Column Number Pyramid (1, 12, 123...)
C
#include<stdio.h>
int main(){
    int i ,j;
    for (i=1 ;i<=5; i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf(" ");}
        for (j=1;j<=i;j++)
        {
            printf("%d" , j );
        }
    printf("\n");
    }
}
 */

/* 3. Right-Aligned Row Number Pyramid (1, 22, 333...)

#include<stdio.h>
int main(){
    int i ,j;
    for (i=1 ;i<=5; i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf(" ");}
        for (j=1;j<=i;j++)
        {
            printf("%d" , i );
        }
    printf("\n");
    }
} */

/* 4. Right-Aligned Spaced Column Number Pyramid
C
#include<stdio.h>
int main(){
    int i ,j;
    for (i=1 ;i<=5; i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf(" ");}
        for (j=1;j<=i;j++)
        {
            printf("%d " , j );
        }
    printf("\n");
    }
} */

/* 5. Right-Aligned Spaced Row Number Pyramid
C
#include<stdio.h>
int main(){
    int i ,j;
    for (i=1 ;i<=5; i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf(" ");}
        for (j=1;j<=i;j++)
        {
            printf("%d " , i );
        }
    printf("\n");
    }
} */

/* 6. Binary Row Pyramid (Using i%2 Logic)
C
#include<stdio.h>
int main(){
    int i ,j;
    for (i=1 ;i<=5; i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf(" ");}
        for (j=1;j<=i;j++)
        {
            printf("%d " , i%2  );
        }
    printf("\n");
    }
} */

/* 7. Continuous Increment Number Pyramid (Floyd’s Style)
C
#include<stdio.h>
int main(){
    int i ,j , k=1;
    for (i=1 ;i<=5; i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf(" ");}
        for (j=1;j<=i;j++)
        {
            printf("%d " , k++  );
        }
    printf("\n");
    }
} */

/* 8. Binary Column Pyramid (Using j%2 Logic)
C
#include<stdio.h>
int main(){
    int i ,j ;
    for (i=1 ;i<=5; i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf(" ");}
        for (j=1;j<=i;j++)
        {
            printf("%d " , j%2  );
        }
    printf("\n");
    }
} */

/* 9. ASCII Column-wise Alphabet Pyramid (A, AB, ABC...)
C
#include<stdio.h>
int main(){
    int i ,j ;
    for (i=1 ;i<=5; i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf(" ");}
        for (j=1;j<=i;j++)
        {
            printf("%c " , j+64  ); // Casting number to char
        }
    printf("\n");
    }
} */
/* 10. ASCII Row-wise Alphabet Pyramid (A, BB, CCC...)
C
#include<stdio.h>
int main(){
    int i ,j ;
    for (i=1 ;i<=5; i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf(" ");}
        for (j=1;j<=i;j++)
        {
            printf("%c " , i+64  );
        }
    printf("\n");
    }
} */

/* 11. Lowercase ASCII Row Pyramid (Using 91+ Offset)
C
#include<stdio.h>
int main(){
    int i ,j ;
    for (i=1 ;i<=5; i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf(" ");}
        for (j=1;j<=i;j++)
        {
            printf("%c " , i+91  );
        }
    printf("\n");
    }
} */

/* 12. Conditional Diagonal Number Pyramid (i==j || j==1 Logic)
C
#include<stdio.h>
int main(){
    int i ,j ;
    for (i=1 ;i<=5; i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf(" ");}
        for (j=1;j<=i;j++)
        {
            printf("%d " , (i==j||j==1?i:0)  );
        }
    printf("\n");
    }
} */
/* 13. Hollow Right-Aligned Pyramid (Boundary Logic)
C
#include<stdio.h>
int main(){
    int i ,j ;
    for (i=1 ;i<=5; i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf(" ");}
        for (j=1;j<=i;j++)
        {
            if (j == 1 || j == i || i == 5) {
                printf("%d ", i); 
            } 
            else {
                printf("  ");}
        }
    printf("\n");
    }
} */

/* 14. Full Symmetrical Palindromic Pyramid (The Master Logic)
C
#include<stdio.h>
int main(){
    int i , j ;
    for (i=1;i<=5;i++){
        for (j =1;j<=5-i;j++){
            printf("  ");}
        for (j =1;j<=i;j++){
            printf("%d ",j);
        }
        for (j=i-1;j>=1;j--){
            printf("%d ",j);
        }
    printf("\n");
    }
    return 0 ;
} */