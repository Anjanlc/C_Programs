#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1){
        int choice;
        int number;
        int num;
        int i,sum=0;

        printf("\n\nMenu\n");
        printf("======\n");
        printf("1.TO converse ASCII code to char\n");
        printf("2.TO find the sum of n natural number\n");
        printf("3.Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                printf("Enter any number:");
                scanf("%d",&number);

                printf("The character of %d is %c \n",number,number);
                break;

            case 2:

                printf("Enter the natural number : ");
                scanf("%d",&num);

                for (i=1 ; i<=num ; i++){
                    sum=sum+i;
                }
                
                printf("The sum of the number you entered is %d\n",sum);

                break;

            case 3:
                exit (0);

            default:
                printf("Please enter a valid choice.\n");

        }
        
    
    }
    return 0;
}