#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float length,gravity,time_period,t;

    printf("Enter a length and acceleration :");
    scanf("%f %f",&length,&gravity);

    t = sqrt(length / gravity);
    time_period = 2*PI*t;

    printf("The time period of pendulum is %f\n",time_period);
    return 0;
}