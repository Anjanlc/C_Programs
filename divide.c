#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);

    x%3==0 && x%5==0 && x!=0 ? printf("divisible\n") : printf("not divisible\n");

}