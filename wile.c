#include<stdio.h>
 int main()
 {
    int i,j,k;
    for( i=1; i<=5; i++){ // for row
    
    for(j=5; j>i; j--) // for space
    {
    printf(" ");
    }
    for(k=1;k<=i;k++)
    {
        printf("* ");
    }
    printf("\n");
      }
    return 0;
 }