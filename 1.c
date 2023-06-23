#include<stdio.h>
int main()
{
    int i, sum=0, number;

   
    
    for(i=1;i<=10;i++)
    {
        printf("Enter a number :");
        scanf("%d",&number);
    
        if(number<0){
            break;
        }
        else
        {
            sum = sum + number;
        }
    }
    printf("The sum of number is %d \n",sum);
    return 0;

}