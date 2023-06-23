#include<stdio.h>
#define ROWS 3
#define COLS 3
int main()
{
    int matrix [ROWS] [COLS], sum=0, i, j;

    printf("Enter a elements of matrix 1");

    for(i=0; i<ROWS; i++){
        for (j=0; j<COLS; j++){
            scanf("%d",&matrix[i] [j]);
        }
    }

    for(i=0; i<ROWS; i++){
        for (j=0; j<COLS; j++){
            sum += matrix [i] [j];
        }
    }
    printf("The Sum of elements of matrix is %d", sum);

    return 0;

}