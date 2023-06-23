#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,distance;
     printf("Enter the value of first point :");
    scanf("%f %f",&x1,&y1);
    printf("Enter the value of second point :");
    scanf("%f %f",&x2,&y2);

    float a= (x1 - x2);
    float b= (y1 - y2);

    distance = fabs(a) + fabs(b);

    printf("Manhattan distance is %.2f\n",distance);
    return 0;
}