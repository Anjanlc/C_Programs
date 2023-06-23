#include<stdio.h>

int main(){
    int arr[5],n,i,small=0;

    printf("Enter the number of in array:");
    scanf("%d",&n);

    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    small=arr[0];
    for(i=0;i<n;i++){
        if(small>arr[i]){

            small = arr[i];
        }
    }
    printf("Smallest elements in array is:%d",small);

    
    return 0;
}