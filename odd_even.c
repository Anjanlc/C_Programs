#include<stdio.h>
int main()
{
    int a;
    printf("enter any number to check odd or even:");
    scanf("%d",&a);

    if((a&1)==0){
        printf("The given number is even\n");
    }
    else{
        printf("The given number is odd number\n");
    }


}