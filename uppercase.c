#include<stdio.h>

int main(){
    char str[50];
    int count=0,i;

    printf("ENter strings");
    gets(str);

    for(i=0;i<strlen(str);i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        count++
    }


    
    return 0;
}