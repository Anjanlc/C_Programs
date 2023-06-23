#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int i, j, count=0;

    printf("Enter any string:");
    gets(string);

    for(i=0; i<strlen(string); i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'|| string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U'){
            count ++;
            printf("%c",string[i]);

        }
        printf(" ");
    }
    printf("\n The number of vowels in given string are %d",count);
    return 0;

}