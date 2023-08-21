#include<stdio.h>

int is_prime(int a){
    
    for(int i = 2 ; i < a ; i++){

        if ( a % i == 0){

            return 0;
        }

        return 1;
    }
}

int main(){
    int num;
    printf("Enter any number to check either it is prime or not ");
    scanf("%d",&num);

    if(is_prime(num)){
        printf("Prime number");
    }else{
        printf("Not a prime number");
    }

    return 0;
}