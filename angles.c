//  Write a C program to input angles of a triangle and check whether triangle is valid or not. (Hint: sum
//  of angles in triangle is 180 degrees)

#include<stdio.h>
int main()
{
    float angle1, angle2, angle3;

    printf("Enter first angles of triangle  : ");
    scanf("%f",&angle1);
    printf("Enter second angles of triangle  : ");
    scanf("%f",&angle2); 
    printf("Enter third angles of triangle  : ");
    scanf("%f",&angle3);

    

    if (angle1+angle2+angle3 == 180) {
           printf("The given angles of triangle are valid.\n");
    }
    else
    {
         printf("Invalid\n");
    }
}