#include<stdio.h>
int main()
{
    int i, n, sum=0 , sign = 1 , term=0;

    printf("Enter the vlaue of number you want to add:");
    scanf("%d",&n);
        for ( i = 1 ; i <= n ; i++)
    {
    
            term = (term * 10 + i);
            sum += (sign * term);
            sign *= -1;
    }
    printf(" The sum of series is %d \n", sum);

    return 0;
}
