//write a program that checks whether a given square matrix of dimension 3x3 is an identity matrix.

#include<stdio.h>
#include<string.h>
#define ROWS 3
#define COLS 3
int main()
{
    int matrix[ROWS] [COLS];
    int i , j ,is_identity = 1;

    printf("Enter the elements of 3x3 matrix.\n");

    for (i=0 ; i<ROWS ; i++){
        for (j=0 ; j<COLS ; j++){
            scanf("%d" , &matrix[i][j]);
        }
    }
    
    for (i=0 ; i<ROWS ; i++){
        for (j=0 ; j<COLS ; j++){

            if (i==j){

                if (matrix[i][j] !=1){
                    is_identity =0;
                    break;
                }
            }
        }
    if(is_identity==0){
        break;
    }
    }
    if(is_identity){
        printf("The given square matrix of dimension 3x3 is an identity matrix. \n");
    }
    else{
        printf("The given square matrix of dimension 3x3 is not an identity matrix. \n");
    }

    return 0;
}