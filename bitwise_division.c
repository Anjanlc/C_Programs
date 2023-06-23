#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    int multiplication= number<<2;
    int division = number>>2;

    printf("Division by 4 : %d\n  multiplication by 4 : %d\n",division,multiplication);
     return 0;

}
