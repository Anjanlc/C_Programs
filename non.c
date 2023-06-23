#include<stdio.h>
int main()
{
    char name[20] = {'\x41', '\x4E', '\x4A', '\x41', '\x4E', '\x20', '\x44', '\x41', '\x4B', '\x41', '\0'};
    int second[20] = {0101, 0116, 0112, 0101, 0116, 040, 0104, 0101, 0113, 0101, 000};
    int third[20] = {0b1000001, 0b1001110, 0b1001010, 0b1000001, 0b1001110, 0b100000, 0b1000100, 0b1000001, 0b1001011, 0b1000001, 0b0};
    
    for(int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");
    for(int i = 0; second[i]; i++)
    {
        printf("%c", second[i]);
    }
    printf("\n");
    for(int i = 0; third[i]; i++)
    {
        printf("%c", third[i]);
    }
    return 0;    
}