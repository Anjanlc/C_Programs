#include<stdio.h>
#include<string.h>
struct date{
    int month;
    int day;
    int year;
};
struct dept{
    char name[50];
    int salary;
    char add[50];
    int p_num;
    char dept[50];
    struct date dob;
};

int main(){

    struct dept dp[50];
    for(int i=0;i<3;i++){
    printf("Enter %d name\n",i);
    scanf("%s",dp[i].name);
    printf("Enter %d salary\n",i);
    scanf("%d",&dp[i].salary);
    printf("Enter %d add\n",i);
    scanf("%s",dp[i].add);
    printf("Enter %d phone number\n",i);
    scanf("%d",&dp[i].p_num);
    printf("Enter %d dept\n",i);
    scanf("%s",dp[i].dept);
    printf("Enter %d year,month,date\n",i);
    scanf("%d %d %d",&dp[i].dob.year,&dp[i].dob.month,&dp[i].dob.day);
    }
    for(int i=0;i<3;i++){
        if(dp[i].salary > 5){
           printf("\n%s\n",dp[i].name); 
           printf("\n%d\n",dp[i].salary); 
           printf("\n%s\n",dp[i].add); 
           printf("\n%d\n",dp[i].p_num); 
           printf("\n%s\n",dp[i].dept); 
           printf("\n%d/%d/%d\n",dp[i].dob.year,dp[i].dob.month,dp[i].dob.day); 
        }
    }
    return 0;
}

