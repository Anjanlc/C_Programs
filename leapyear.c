#include<stdio.h>

int main(){
    int y;

    printf("enter a year");
    scanf("%d",&y);

    int is_leap;
    if(y%4!=0){
        is_leap=0;
    }else{
        if(y % 100 != 0){
            is_leap = 1;
        }else{
            if(y % 400 == 0){
            is_leap = 1;
            }else{
                is_leap = 0;
            }
        }
    }

    if(is_leap){
        printf("Leap year");
    }else{
        printf("not leap year");
    }

    return 0;
}