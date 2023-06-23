#include<stdio.h>
int main()
{
    int i=1;

Anjan:
    printf("%d\n",i);
    i++;

    if(i<=10)
        goto Anjan;

    return 0;
}
