#include<stdio.h>
#include<math.h>

int main(){
    int n, sum=0;
    printf("Enter a number to check either it is armstrong or not ");
    scanf("%d",&n);

    int temp = n,count=0;

    do{
        count += 1;
        temp /= 10;
    }while(temp != 0 );

    temp = n;

    do{
        int digit = temp % 10;
        temp /= 10;
        sum += (int)pow(digit,count);
    }while(temp !=0);

    if(sum == n){
        printf("The given number is armstrong");
    }else{
        printf("The entered number is not a armstrong");
    }
    
    return 0;
}