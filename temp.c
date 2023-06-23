#include<stdio.h>
int main()
{
    float celcius,fahrenheit;
    printf("Enter temperature in celcius:");
    scanf("%f",&celcius);
   
    fahrenheit= (celcius* 9/5 )+ 32;

    printf("Temperature in farenheit is %f",fahrenheit);
    return 0;
}