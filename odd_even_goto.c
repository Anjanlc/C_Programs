#include<stdio.h>
int main()
{
    int num;

    printf("Enter any number :");
    scanf("%d",&num);
    top:
    if (num % 2==0){
        printf("Number is even\n\n\n");

    }
    else {

        printf("Number is odd\n");
    }
    goto top;
    return 0;
}