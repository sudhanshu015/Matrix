#include<stdio.h>
int main()
{
    int a;
    printf("enter the number a");
    scanf("%d",& a);
    if(a%5==0&&a%7==0)
    {
        printf("%d both are divied by 5and7",a);

    }
    else
    {
        printf("%d not divied",a);
    }
    return 0;
}