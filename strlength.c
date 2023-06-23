// WAP to find the length of a string without using atring length {strlen()}.

#include<stdio.h>

int main(){
    int length=0,i=0;
    char name[50];

    printf("Enter the name:");
    gets(name);

    while(name[i]!='\0'){
        length++;
        i++;
    }
    printf("The length of given string is %d",length++);
    
    return 0;
}