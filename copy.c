#include<stdio.h>
#include<string.h>

int main(){
    char str[]="Hello there what's up?";
    char str2[100];

    strcpy(str2,str);

    printf("%s",str2);
    return 0;
}