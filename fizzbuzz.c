#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter a second number\n");
    scanf("%d",&b);
    printf("Enter a third number\n");
    scanf("%d",&c);

    int sum = a+b;
    int diff= b-c;
    int multiply= a*b*c;

    printf("The sum of %d and %d is %d\n\n",a,b,sum);
    printf("The difference of %d and %d is %d\n\n",b,c,diff);
    printf("The multiplication of %d and %d is %d\n",a,b,c);
    


    return 0;
}