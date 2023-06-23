// WAP to input 3*3 order matrix and display.
#include<stdio.h>

int main(){
    int a[3][3],i,j;

    printf("Enter the elements of matrix:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
        printf("\nElements of given matrix is\n");

    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d   ",a[i][j]);
        }
        printf("\n");
        
    }
    
    
    return 0;
}