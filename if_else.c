#include<stdio.h>

int main(){
    int a,b,c;
    
    printf("enter any three number to check which is smaller\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b){
        if(a<c){
            printf("%d is smaller than %d and %d\n",a,b,c);
        }
        else{
            printf("%d is smaller than %d and %d\n",c,a,b);
        }
    }
    else{
        if(b<c){
            
          printf("%d is smaller than %d and %d\n",b,a,c);  
        }
        else{
            printf("%d is smaller than %d and %d\n",c,a,b);
        }
    }
    return 0;
}