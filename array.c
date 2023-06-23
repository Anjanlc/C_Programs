#include<stdio.h>
int main()
{
    int array[7];
    printf("Enter the elements of array:\n");
    int i;
    for(i=0;i<(int) (sizeof(array)/sizeof (array[0]));i++){
        scanf("%d",&array[i]);
    }

    for(i=0;i<(int) (sizeof(array)/sizeof (array[0]));i++){
        printf("  \n %d \n\n",array[i]);

    }
    //printf("\n");
    return 0;

}

