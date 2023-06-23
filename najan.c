#include <stdio.h>
 
int main()
{
  int i, Number, count = 0; 
   
  printf("\n Please Enter any number to Check for Prime \n");
  scanf("%d", &Number);
 
  for (i = 2; i <= Number/2; i++)
   {
     if(Number%i == 0)
     {
        count++;
	break;
     }	
   }
   if(count == 0 && Number != 1 )
   {
   	printf("\n %d is a Prime Number", Number);
   }
   else
   {
   	printf("\n %d is Not a Prime Number", Number);
   }
  return 0;
}