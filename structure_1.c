// Wap to sum of all digits of integer number using recursion.
#include <stdio.h>
int integer(int a);
int main()
{
    int x, y;
    printf("enter the number");
    scanf("%d", &x);
    y = integer(x);
    printf("%d", y);
    return 0;
}
int integer(int a)
{
    int sum = 0;
    if (a == 0)
    {
        return 0;
    }
    else
    {
        return (sum + a % 10) + integer(a / 10);
    }
}