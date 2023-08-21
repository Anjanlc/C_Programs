#include<stdio.h>

struct Game {
    char p_name[50];
    char c_name[50];
    char p_type[50];
    int num;
    int salary;
};

int main(){
    struct Game game[11];
    for(int i=0;i<4;i++){
        printf("Enter %d player name\n",i);
        scanf("%s",game[i].p_name);
        printf("ENter %d country name\n",i);
        scanf("%s",game[i].c_name);
        printf("Enter %d playing type\n",i);
        scanf("%s",game[i].p_type);
        printf("Enter %d number of game won\n",i);
        scanf("%d",&game[i].num);
        printf("Enter %d salary\n",i);
        scanf("%d",&game[i].salary);

    }

    for(int i=0;i<4;i++){
        if(game[i].salary > 30000){
            printf("\n Name: %s \n",game[i].p_name);
            printf("\n country: %s \n",game[i].c_name);
            printf("\n playing type: %s \n",game[i].p_type);
            printf("\n number of match won: %d \n",game[i].num);
        }
    }
    return 0;
}