// Wap to find the tramspose of m*n matrix.

#include<stdio.h>

int main(){
    int mat[50][50],m,n,i,j;

    printf("Enter the row and cols of matrix:");
    scanf("%d %d",&m,&n);

    printf("Enter %d elements in the given matrix:",m*n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nThe given matrx is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\tThe transpose of given matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",mat[j][i]);
        }
        printf("\n");
        
    }
    
    return 0;
}