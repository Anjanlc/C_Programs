#include<stdio.h>
int main()
{
   char character;
   printf("Enter any character : ");
   scanf("%c",&character);

   if((character>='a'&&character<='z')||(character>='A'&&character<='Z')||(character==32)||(character>='0'&&character<='9'))
   {
       printf("You entered alphanumeric or a space\n");

   }
   else{
       printf("Invalid input\n");

   }
   return 0;

}