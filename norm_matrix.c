// WAP to find the m*n order of matrix and find its NORM.
// (Where NORM is square root of the sum of square of all elements. )

#include<stdio.h>
#include<math.h>

int main(){
    int mat[50][50],m,n,i,j;
    int sum=0, norm=0;

    printf("Enter the number of rows and cols:");
    scanf("%d %d",&m,&n);
    printf("Enter %d elements of matrix",m*n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);

        }
    }
    printf("\nMatrix looks like:\n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",mat[i][j]);

        }
        printf("\n");
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){

            sum += mat[i][j]*mat[i][j];


        }
    }

    norm = sqrt(sum);
    printf("\n The norm vlaue of given matrix is: %d\n",norm);
    
    return 0;
}