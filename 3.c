#include<stdio.h>
int main()
{
    int i;
    for(i = 70; i <= 80; i++)
    {
        if(i % 2 !=0){
            continue;
        }
        else{
            printf("The neven numbers are %d\n", i); 
        }
        
    }
    return 0;
}