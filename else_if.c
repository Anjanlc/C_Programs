// sample program to find the minimum of four numbers.

#include<stdio.h>

int main(){
    int a,b,c,d;

    printf("Enter any four number to find the smallest one\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a<b && a<c && a<d){
        printf("%d is smaller\n",a);

    }
    else if(b<c && b<d){
        printf("%d is smaller\n",b);

    }
    else if(c<d){
        printf("%d is smaller\n",c);
    }
    else{
        printf("%d is smaller",d);
    }
    return 0;
}
