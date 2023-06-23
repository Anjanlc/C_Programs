#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice,character,sum=0,number,i;


    printf("               ====menu======\n\n");
    printf("1. Conversion of ASCII code to character\n");
    printf("2. Find the sum of n natural numbers\n");
    printf("3. Exit the program\n");

    printf("Enter your choice either (1, 2 or 3)\n");
    scanf("%d", &choice);

    switch (choice)
    {

        case 1:
            printf("Enter the number:\n");
            scanf("%d", &character);

            printf("The ASCII value character of the entered number is:%c\n",character);
            
            break;

        case 2:
            printf("Enter the number of terms: \n");
            scanf("%d",&number);

            for (i=1;i <= number; i++)
            {
                sum += i;

            }

            printf("The sum of natural number upto %d is %d\n",number,sum);

            break;

        case 3:

            exit(0);
            break;


        default:
            printf("Invalid. Please enter the valid option.... \n");

    }
    return 0;

}