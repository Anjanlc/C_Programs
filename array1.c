#include<stdio.h>

int main(){
    int n,i,j;
    int num[n];

    printf("Enter a number u wanna add into array");
    scanf("%d",&n);
    printf("Enter elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);

    }
    for(i=0;i<n;i++){

        int nm = num[i];

        int is_prime = 1;

        for(j=2;j<n;j++){

            if(nm % j == 0){

                is_prime=0;
            }


        }
        
    }
    
    return 0;
}