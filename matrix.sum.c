// WAP to input m*n order matrix and find sum of all elements.

#include<stdio.h>

int main(){
    int mat[50][50],m,n;
    int i,j;
    int sum=0;

    printf("enter the number of rows and cols\n");
    scanf("%d %d",&m,&n);
    printf("Enter the %d number of element: ",m*n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }

    }
    printf("\n Elements of matrix are:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",mat[i][j]);

        }
        printf("\n");

    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum += mat[i][j];
        }
        
    }
    printf("\n\tsum of elements of matrix:~ %d \n",sum);
    
    
    return 0;
}