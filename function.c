#include<stdio.h>
int squarenum(int a);
int main(){

    int x,y;
    printf("Enter any number  to find the square of that number:");
    scanf("%d",&x);

    y=squarenum(x);

    printf("%d is the square of the given number\n",y);

}

    int squarenum (int a)

{
    int squrta;
    squrta=(a)*(a);

    return (squrta);
}
    
    
