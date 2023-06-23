#include<stdio.h>
int fibo(int);
int main()
{
    int n, i, j;

    printf("Enter any positive number to find fibonacci series:");
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        j=fibo(i);
        printf("\n%d",j);
    }
}
int fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1) + fibo (n-2);
}