// WAP to check whether any number is present in 2D array and display position.
// Given 3*3 matrix    int mat[3][3]={{15,17,19},{12,18,13},{14,25,19}}

#include<stdio.h>

int main(){
    int mat[3][3]={{15,17,19},{12,18,13},{14,25,19}},a,b,number,i,j,flag=0;
    printf("Enter any number to check whether it is present or not:");
    scanf("%d",&number);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(mat[i][j]==number){
                flag=1;
                a = i;
                b = j;
            }
        }
    }
    if(flag=1)
    printf("Number is found and the position of the number is mat[%d][%d]\n",a,b);
    else 
    printf("The entered number is not found\n");
    
    return 0;
}