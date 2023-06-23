#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,distance;
    printf("Enter the value of first point :");
    scanf("%f %f",&x1,&y1);
    printf("Enter the value of second point :");
    scanf("%f %f",&x2,&y2);

    float a= pow(x2 - x1 ,2);
    float b= pow(y2 - y1 ,2);

    distance= sqrt(a+b);
    printf("The distance betn two points is %f\n",distance);

    return 0;


}