// WAP to input n number in array and count number of odd and even elements,also find sum of each.

#include<stdio.h>

int main(){
    int arr[50],n,i,ecount=0,ocount=0,esum=0,osum=0;

    printf("Enter the number of array:");
    scanf("%d",&n);

    printf("Enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            ecount++;
            esum += arr[i];
        }
        else{
            ocount++;
            osum += arr[i];

        }
    }
    printf("\tThere are %d even numbers\n",ecount);
    printf("\t\tThere are %d numbers of odd number\n",ocount);
    printf("\t\t\tThe sum of even numbers : %d\n",esum);
    printf("\t\t\t\tThe sum of odd numbers : %d\n",osum);

    printf("\n\t\t\t\t\tsmile :)");
    printf("\n\n\t\t\t\t\t\tsad :(");

    
    return 0;
}