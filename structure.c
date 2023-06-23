#include<stdio.h>

struct Book{
    char name[100];
    char author[100];
    float price;
};
int main()
{
    struct Book books [5];
    for(int i=0; i<5; i++){

    printf("Enter the name of %d books:",i);
    scanf("%s", books[i].name);

    fflush(stdin);
    printf("Enter the author of %d books:",i);
    scanf("%s", books[i].author);

    fflush(stdin);
    printf("Enter the price of %d books:",i);
    scanf("%f", &books[i].price);

    }
    for(int i=0; i<5; i++){
        if(books[i].price > 300){
            printf("The name of book is %s\n",books[i].name);

            printf("The price of book is %s\n",books[i].price);

        }
    }
    return 0;

}