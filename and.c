#include<stdio.h>
int main()
{
    int a,b,sum,diff;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    sum = a+b , diff = a-b;

    printf("The sum of %d and %d is %d\n",a,b,sum);
    printf("The difference of %d and %d is %d\n",a,b,diff);

    return 0;

}