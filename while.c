#include<stdio.h>

int main(){
    int a,fact=1;

    printf("Enter a number to find the factorial\n");
    scanf("%d",&a);

    while(a>0){
        fact = fact * a;
        a--;
        
    }
    printf("%d",fact);
    
    
    return 0;
}