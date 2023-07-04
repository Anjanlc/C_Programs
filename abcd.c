#include<stdio.h>
int fib(int);
int main(){

    int n, i ,j;
    printf("Enter any positive number");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        j= fib (i);
        printf("%d",j);
    }
}