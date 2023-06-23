#include<stdio.h>
int main()
{
    int value;
    printf("Enter a number to find its character:");
    scanf("%d",&value);
    printf("The ascii value of %d is %c",value,value);
    return 0;
}