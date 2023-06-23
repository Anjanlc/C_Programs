#include<stdio.h>
#include<stdlib.h>

// int is_equal(int mat1[] [],
//     int m1, int n1,
//     int mat2[] [],
//     int m2, int n2 );

int main()
{
    int ROW1, COL1;
    printf("Enter a number of rows and columns:");
    scanf("%d %d",&ROW1, &COL1);
    int mat1[100] [100];
    printf("Enter the element of the matrix 1:");
    for(int i=0; i<ROW1; i++){
        for(int j=0; j<COL1; j++){
            scanf("%d",&mat1 [i] [j]);
        }
    }
    int ROW2, COL2;
    printf("Enter the number of rows and column for matrix 2:");
    scanf("%d %d",&ROW2, &COL2);
    int mat2[100][100];
    printf("Enter the elements of matrix:");
    for(int i=0; i<ROW2; i++){
        for (int j=0; j<COL2; j++){
            scanf("%d", &mat2[i] [j]);
        }
    }
    if(ROW1!=ROW2){
        printf("They are not equal\n");
    }
    
//    is_equal (mat1[ROW1] [COL1], mat2[ROW2] [COL2]);
//    if(is_equal == 1){
//        printf("They are equal");
//    }else{
//        printf("Not Equal");
//    }
    return 0;
}
