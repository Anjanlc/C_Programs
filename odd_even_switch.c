#include<stdio.h>
int main()
{
    int digit;
    printf("Enter a digit betn 0-9 :");
    scanf("%d",&digit);

    switch(digit % 2){
        case 0:
            printf("The given number is even\n");
            break;
            
        case 1:
            printf("The given number is odd\n");
    }
    return 0;
}