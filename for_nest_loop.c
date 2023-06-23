#include<stdio.h>
int main()
{
    char i,j;
    for(i=1;i<=5;i++)
    {
        for(j=97;j<=101;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}