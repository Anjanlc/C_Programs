#include<stdio.h>

int add(int a,int b);


int main(){

    int x,y,z;

    printf("Enter any two number to check the sum of two number");
    scanf("%d %d",&x,&y);

    z=add(x,y);
    printf("%d is the sum of two number",z):
    
}
    int add(int a,int b)

    {
        int sum=0;
        sum=a+b;
        return(sum);
    }