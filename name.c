#include<stdio.h>

int main(){
    int a;
    char name[50][50];
    int i;

    printf("Enter the number of students\n");
    scanf("%d",&a);

    printf("Enter the name of %d students:\n",a);
    for(i=0;i<=a;i++){
        gets(name[i]);

    }
    printf("\n\tEntered names are\n\t");
    for(i=0;i<=a;i++){
        printf("%s",name[i]);
        printf("\n");
    }


    
    return 0;
}