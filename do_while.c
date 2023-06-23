#include<stdio.h>

int main(){
    int a,sum=0;

    do{
        printf("Enter the number\n");
        scanf("%d",&a);
        sum += a;
    }
    while(a!=0);
    printf("\t\tThe sum of the given number is %d\n\n",sum);
    return 0;
}