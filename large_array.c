#include<stdio.h>

int main(){
    int arr[100],n,i,large=0;

    printf("Enter the number of array:");
    scanf("%d",&n);

    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    large =arr[0];
    for(i=0;i<n;i++){
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
        printf("Largest element = %d",large);
    
    
    return 0;
}