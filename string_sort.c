// WAP to input 10 students name and sort them.

#include<stdio.h>
#include<string.h>

int main(){
    int i,j;
    char name[50][50],temp=0;

    printf("Enter the name of 10 students:");
    for(i=0;i<10;i++){
        gets(name[i]);
    }
    printf("\n Names of students are:\n\n\t");
    for(i=0;i<10;i++){
        puts(name[i]);
        printf("\n\t");
    }

    for(i=0;i<9;i++){
        for(j=0;j<i-1;j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
             
        }
    }
    
    
    
    
    return 0;
}



