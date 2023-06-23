#include<stdio.h>
int main(){
    int arr[100],i,n;
    int sum=0;
    float avg;

    printf("Enter the number of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);

    }
    printf("\n");
    for(i=0;i<n;i++){
        sum += arr[i];
    }
        avg = sum/n;

        printf("The sum of all elements of arrays is %d.\n",sum);
        printf("The average value of all elements of array is %d ",arr[i]);
    
    
    return 0;
}