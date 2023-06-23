#include<stdio.h>
int main()
{
    float fahrenheit;

    printf("please enter the temperature of a city in degree fahrenheit\n");

    scanf("%f",&fahrenheit);
    
    fahrenheit= (fahrenheit-32)*5/9;

    printf("The temperature of that city in degree centigrade is %.2f\n",fahrenheit);
    
    return 0;

}