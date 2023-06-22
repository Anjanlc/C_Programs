#include<stdio.h>

int main(){
    
    int a,b,c;

    

    printf("Enter your age\n");
    scanf("%da",&a);
    if(a>=18){
        printf("You are eligible to vote :)");

    }
    else{
        printf("Sorry you are not eligible to vote:(");

    }
    
    return 0;
}