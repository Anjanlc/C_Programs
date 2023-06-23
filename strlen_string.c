// WAP to check given string is palindrome or not.

#include<stdio.h>
#include<string.h>

int main(){

    char name1[50],name2[50];
    printf("Enter the name:");
    gets(name1);
    strcpy(name2,name1);
    strrev(name2);
    if(strcmp(name1,name2)==0){
        printf("Entered name is palindrome\n");
    }
    else{
        printf("Entered name is not palindrome\n");
    }


    
    return 0;
}