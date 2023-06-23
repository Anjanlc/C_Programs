#include<stdio.h>

int main(){
    int sum=0,a;

    // printf("Enter any number\n");
    // scanf("%d",&a);

    for(int i=0;i<=a;i++){
        
        printf("Enter any number\n");
        scanf("%d",&a);

        sum+=a;

    }

    printf("The sum of  the given number is %d",sum);
    
    return 0;
}