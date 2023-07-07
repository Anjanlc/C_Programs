/*.Write a program in C that takes two numbers from user as input and then displays the maximum among the 
two numbers*/

#include<stdio.h>
int main()
{
    float num_1,num_2,check;

    printf("Enter a number num 1 and num 2 to check which is greater:");
    scanf("%f %f",&num_1,&num_2);

    check = num_1>num_2 ? num_1 : num_2;

    printf("maximum number is %f\n",check);

    return 0;
}