/* topic pointer */

#include<stdio.h>
int main()
{
    const  char abc ='a';

    printf("The value of abc : %c\n",abc);
    
   /* printf("The value of abc : %d\n",abc);

    int *anjan = &abc;
    *anjan=34;

     printf("The value of abc : %d\n",abc);*/

    char *anjan= &abc;
    *anjan='b';
     printf("The value of abc : %c\n",abc);
     


     return 0;
}