// WAP to input your name of n students and display it.

#include<stdio.h>

int main(){
    char name[50][50];
    int num,i,j;

    printf("Enter the number of students\n");
    scanf("%d",&num);
    printf("Enter the name of %d number of students:",num);
    for(i=0;i<=num;i++){
        gets(name[i]);
    }
    printf("The name of %d number of students are:\n\t");
    for(i=0;i<=num;i++){
        puts(name[i]);
        printf("     ");
    }
    
    
    return 0;
}