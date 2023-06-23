#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, j, count=0;

    printf("Enter any character of array:");
    gets(str);

    for(i=0; i<strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count ++;
            printf("%c",str[i]);

        }
        printf(" ");
    }
    printf("\n The number of vowels in given string are %d",count);
    
    return 0;
}
