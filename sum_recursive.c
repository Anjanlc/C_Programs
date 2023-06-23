#include<stdio.h>
int  sum(int num)
{
    if(num)
        return(num + sum(num -1));
    else
        return 0;
}
int main()
{
    int count;

    printf("Enter a positive number:");
    scanf("%d",&count);

    printf("The sum of first %d natural number is %d",count, sum(count));

    return 0;
}