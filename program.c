#include<stdio.h>
int main()
{
    int a,b,sum,difference,product;
    float quotient,remainder;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);

    sum=a+ (float) b;
    difference=a- (float) b;
    product=a* (float) b;
    quotient=a/ (float) b;
    remainder=a% b;

    printf("The sum of %d and %d is %d\n",a,b,sum);
    printf("The difference of %d and %d is %d\n",a,b,difference);
    printf("The product of %d and %d is %d\n",a,b,product);
    printf("The quotient of %d and %d is %d\n",a,b,quotient);
    printf("The remainder of %d and %d is %d\n",a,b,remainder);

    return 0;
}