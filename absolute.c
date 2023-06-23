#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    (a>=0) ? printf("absolute value=%d\n",a) : printf("absolute value=%d\n",-a);

    return 0;
}