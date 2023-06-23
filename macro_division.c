#include<stdio.h>
#define IS_DIVISIBLE (num %7 == 0? 1: 0 )
int main()
{
    int num;
    printf("Enter a number to check either it is divisible by 7 or not:");
    scanf("%d",&num);

    if(IS_DIVISIBLE){
        printf("It is  divisible by 7\n");

    }
    else 
    {
        printf("It is not divisible by 7\n");
    }

    return 0;
}






