// WAP to input n number in two array and add content of two array and keep in 3rd array.
#include<stdio.h>

int main(){
    int a[5],b[5],c[5], n,i;
    int sum=0;

    printf("Enter the number of 1st array: ");
    scanf("%d",&n);
    printf("Enter the elements of 1st array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number of 2nd array:");
    scanf("%d",&n);
    printf("Enter the elements of 2nd array:");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    for(i=0;i<n;i++){

        sum = a[i] + b[i];
        c[i]= sum;
    }

    for(i=0;i<n;i++){
    printf("%d\t",c[i]);
    }
    return 0;
}