// WAP to find the sum of diagonal of m*n matrix.

#include<stdio.h>

int main(){
    int mat[50][50],m,n,i,j;
    int sum=0;

    printf("Enter the number of matrix:");
    scanf("%d %d",&m,&n);
    printf("Enter %d elements of matrix:",m*n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);

        }
    }
    printf("\n\t The matrix is given below.\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\t%d ",mat[i][j]);
        }
        printf("\n");

    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                sum += mat[i][j];
            }
        }
    }
    printf("\n\tThe sum of diagonal of matrix is : %d",sum);
    
    return 0;
}