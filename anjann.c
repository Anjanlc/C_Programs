#include<stdio.h>
int main()
{
    const int x=5;

    int *p= &x;

    *p=9;

    printf("The value of x is %d",x);

    return 0;
}