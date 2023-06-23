#include <stdio.h>
int main()
{
    int array[5];
    int i, j, temp;

    printf("Enter the elements to short:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("Given elements in ascending order is:");
    for(i=0; i<5; i++){
        printf(" \n %d\n",array[i]);
    }
    return 0;
}