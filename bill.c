// An electricity is consumed.....  (2015 fall question)..

#include<stdio.h>

int main(){
    int unit,bill;

    printf("Enter the electricity consumed:");
    scanf("%d",&unit);

    if(unit<=100){
        bill=unit *40;

    }
    else if(unit>100 && unit<=300){
        bill= 4000 + (unit-100)*50;
    }
    else{
        bill= 4000 + 10000 + (unit-300)*60;
    }

    bill=bill + 50 ;

    printf("The total price of consumed unit is %d",bill);

    
    return 0;
}