//#include<stdio.h>
//int main()
//{
    //int year;
    //printf("Enter the year to inspect either it is leap or not:");
    //scanf("%d",&year);
//
    //if(year%4=0)

    //int a=3,b=2;
    //a+=b;
    //printf("a=%d",a);
    //return 0;
//
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    } 
    return 0;

}