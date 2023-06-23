#include<stdio.h>
int fact(int);
int main()
{
    int num;
    printf("Enter any positive number to find the factorial:");
    scanf("%d",&num);

    printf("Factorial of %d is %d",num, fact(num));
    return 0;
}
int fact(int num)
{
    if(num)
        return num * fact(num -1);

    return 1;

}