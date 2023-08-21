#include<stdio.h>
int main(){
    int a[50];
    // int ec=0,oc=0,es=0,os=0;1
    

    printf("Enter 5 elements in array for 1st array");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    // printf("Enter 5 elements in array for 2nd array");
    // for(int i=0;i<5;i++){
    //     scanf("%d",&b[i]);
    // }
    
    // for(int i=0;i<5;i++){
    //     c[i]=a[i]+b[i];
    //     printf("\n\n%d\n\n",c);  
    // } 

    int num,flag=0,pos;
    printf("Enter the number u wanna search");
    scanf("%d",num);
    for(int i=0;i<5;i++){
        
        if(a[i]==num){
            flag =1;
            pos=i;

        }
    } 
     if(flag==1)
            printf("found hurreyy and position is %d",pos+1) ;
        else
            printf("not found") ;
        

    //    printf("%d even number sum=%d and %d odd number sum = %d",ec,es,oc,os) ;
    return 0;
}