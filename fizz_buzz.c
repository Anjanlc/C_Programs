#include<stdio.h>
int main()
{
    int  num;
    printf("Entetr a number");
    scanf("%d",&num);

    for(int i=1; i<= num; i++){
        printf("%d",i);
        if(i %3 == 0)
        printf("Fizz");

        if(i %5 == 0){
            printf("Buzz");
        }
        printf("\n");
    }
    


    return 0;
}