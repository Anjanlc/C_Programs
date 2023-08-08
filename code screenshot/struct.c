#include<stdio.h>

struct Book {
    int price;
    char name[50];
    char author[50];
};

int main(){
    struct Book books[500];

    for(int i=0;i<=3;i++){
        printf("ENter the price of %d book\n",i);
        scanf("%d",&books[i].price);
        printf("Enter the name of %d books\n",i);
        scanf("%s",books[i].name);
        printf("ENter the author of %d books\n",i);
        scanf("%s",books[i].author);
    }

    for(int i=0;i<=3;i++){
        if(books[i].price > 300){
            printf("\nName: %s\n",books[i].name);
            printf("\nAuthor:%s\n",books[i].author);
            printf("\nPrice : %d\n",books[i].price);
        }
    }

    return 0;
}