#include<stdio.h>
int maximum (int a, int b);
int main(){
    int MAX, a, b;
    printf("Enter first number");
    scanf("%d",&a);

    printf("Enter second number");
    scanf("%d",&b);

    printf("%d is the maximum among two number.\n",maximum (a,b));
    return 0;
}
int maximum (int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}