#include<stdio.h>
#include<string.h>
int main()
{
    char string1 [100];
    char string2 [100];
    char temp [100];

    printf("Enter the first name: ");
    fgets(string1, 100, stdin);
    printf("Enter the last name : ");
    fgets(string2, 100, stdin);

    strcpy (temp,string1);
    strcpy (string1, string2);
    strcpy (string1,temp);

    printf("The first name is %s",string2);
    printf("The last name is %s",string1);

    return 0;
}