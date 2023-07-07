#include<stdio.h>
//#define MAX(a,b) (a>b? a:b)
//int main(){
//    int MAX, a, b;
//    printf("Enter first number");
//    scanf("%d",&a);

//    printf("Enter second number");
//    scanf("%d",&b);

//    printf("%d is the maximum among two number.\n",MAX (a,b));
//    return 0;

//}

// #include<stdio.h>
// #define MAX(a,b) (a>b? a:b)
// int main()
//{
//    int MAX, a,b;
//    printf("Enter first number");
//    scanf("%d",&a);
//
//    printf("Enter second number");
//    scanf("%d",&b);
//
//    printf("%d is the maximum among two number\n",MAX(a,b));
//    
//    
//    return 0;
//
//} 

#include<stdio.h>
#define MIN(a,b) (a<b? a:b)
int main(){
    int MIN,a,b;
    printf("Enter a first number",a);
    scanf("%d",&a);

    printf("Enter a second number",b);
    scanf("%d",&b);

    printf("%d is the smallest number among two number\n",MIN(a,b));

    return 0;   
}