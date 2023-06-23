#include<stdio.h>
int main()
{
    float number,reciprocal;

    printf("enter the number:");
    scanf("%f",&number);

    reciprocal= 1/(float)number;

    printf("The reciprocal of the given number is %f",reciprocal);

    return 0;
}