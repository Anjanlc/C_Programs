/*Write a program in C that prints the size of different primitive data types like int, unsigned int, float,
char,double,short,unsigned short,long,unsigned long,long double,etc.with the use of size of operator.*/

#include<stdio.h>
int main()
{
    printf("size of int=%d\n",sizeof (int));
    printf("size of unsigned int=%d\n",sizeof (unsigned int));
    printf("size of float=%d\n",sizeof (float));
    printf("size of char= %d\n",sizeof (char));
    printf("size of double=%d\n",sizeof (double));
    printf("size of short=%d\n",sizeof (short));
    printf("size of unsigned short=%d\n",sizeof ( unsigned short));
    printf("size of long=%d\n",sizeof (long));
    printf("size of unsigned long=%d\n",sizeof (unsigned long));
    printf("size of long double=%d\n",sizeof (long double));
    
    return 0;
}
