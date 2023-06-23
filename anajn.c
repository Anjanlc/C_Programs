#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter any two numbers to add:");
    scanf("%d %d",&a,&b);

    sum=a+b;

    printf("The addition of %d and %d is %d\n",a,b,sum);

    return 0;
}