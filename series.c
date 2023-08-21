#include<stdio.h>
#include<math.h>

int main(){
    int n=10;
    float x, sum=0.0;

    printf("enter");
    scanf("%f",&x);

    int sign = 1;

    for(int i=1;i<=n;i++){
        float term = sign * i/(pow(x,i));
        sum += (float)term; 
        sign *= -1; 
    }
    printf("%.3f",sum);

    return 0;
}