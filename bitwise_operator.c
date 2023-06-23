/*Write a program in C that takes two numbers as input and then demonstrate different bitwise operations like 
AND, OR, NOT, XOR etc. between them.*/

#include<stdio.h>
int main()
{
    int a , b;
    int AND, OR, NOT1, NOT2, XOR;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    AND = a & b ; 
    OR = a | b ;
    NOT1 = ~a ;
    NOT2 = ~b ;
    XOR = a ^ b ;
    printf("AND:%d\n",AND);
    printf("OR:%d\n",OR);
    printf("a:%d\n",NOT1);
    printf("b:%d\n",NOT2);
    printf("XOR:%d\n",XOR);
    return 0;
}