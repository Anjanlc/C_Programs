#include<stdio.h>

int fac(int a){
    int mul = 1;
    for(int i = 1 ; i <= a ; i++){

        mul = mul * i;   
    }

    return mul;  
}

int main(){
    int num;

    printf("ENter a number");
    scanf("%d",&num);

    printf("%d ",fac(num));

    return 0;
}

