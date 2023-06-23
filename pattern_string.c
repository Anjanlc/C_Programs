// WAP which accepts string "NEPAL" and prints as follows.
// N
// NE
// NEP
// NEPA
// NEPAL

#include<stdio.h>

int main(){
    int i,j;
    char str[]="ANJAN";

    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
        printf("%c\t",str[i]);
        }
        printf("\n");
    } 
    return 0;
}