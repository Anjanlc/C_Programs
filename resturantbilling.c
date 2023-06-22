#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>


struct Items{
    char item[30];
    float price;
    int qty;

};

struct Orders{
    char customer[50];
    char date[50];
    int numOfItems;
    struct Items itm[50];

};

// Functions to generate bill

void generateBillHeader(char name[50],char date[30]){
    printf("\n\n");
        printf("\t      Aayush stores");
        printf("\n\t    -----------------");
        printf("\nDate:%s",date);
        printf("\nInvoice To: %s",name);
        printf("\n");
        printf("---------------------------------------\n");
        printf("Items\t\t");
        printf("Qty\t\t");
        printf("Total\t\t");
        printf("\n---------------------------------------");
        printf("\n\n");

}

void generateBillBody(char item[30],int qty, float price ){
    printf("%s\t\t",item);
        printf("%d\t\t",qty);
        printf("%.2f\t\t",qty * price);
        printf("\n");

}



void generateBillFooter(float total ){
   printf("\n");
    float dis = 0.1*total;
    float netTotal=total-dis;
    printf("---------------------------------------\n");
    printf("Sub Total\t\t\t%.2f",total);
    printf("\nDiscount @10%s\t\t\t%.2f","%",dis);
    printf("\n\t\t\t\t-------");
    printf("\nNet Total\t\t\t%.2f",netTotal);
    printf("\n---------------------------------------");
    printf("\nGrand Total\t\t     Rs.%.2f",netTotal);
    printf("\n---------------------------------------\n"); 

}
int main(){
    
    int opt,n;
    struct Orders ord;
    struct Orders order;
    char saveBill= 'y', contFlag='y';
    FILE *fp;
    char name[50];

        // dashboard

    while(contFlag == 'y'){
    float total = 0;
    int invoiceFound =0;
    printf("\n\t============= Aayush stores =============\n");
    printf("\n\nPlease select your preferred operation:\n");
    printf("\n1.Generate Invoice");
    printf("\n2.Show all Invoices");
    printf("\n3.Search Invoice");
    printf("\n4.Exit");

    printf("\n\nYour Choice:");
    scanf("%d",&opt);
    fgetc(stdin);
    
    switch(opt){
        case 1:
        system("cls");
        printf("Please enter the name of the customer:\t");
        fgets(ord.customer,50,stdin);
        ord.customer[strlen(ord.customer)-1] = 0;
        strcpy(ord.date,__DATE__);
        printf("\nPlease enter the number of items:\t");
        scanf("%d",&n);
        ord.numOfItems = n;
        for(int i=0;i<n;i++){
            fgetc(stdin);
            printf("\n\n");
            printf("Please enter the name of item %d:\t",i+1);
            fgets(ord.itm[i].item,30,stdin);
            ord.itm[i].item[strlen(ord.itm[i].item)-1] = 0;
            printf("Please enter the quantity of item:\t");
            scanf("%d",&ord.itm[i].qty);
            printf("Please enter the unit price:\t");
            scanf("%f",&ord.itm[i].price);
            total += ord.itm[i].qty * ord.itm[i].price;

        }

        generateBillHeader(ord.customer,ord.date);
        for(int i=0; i<ord.numOfItems; i++){
            generateBillBody(ord.itm[i].item,ord.itm[i].qty,ord.itm[i].price);

        }
        generateBillFooter(total);

        printf("\n Do you want to save the invoice[y/n]:\t");
        scanf("%s",&saveBill);

        if(saveBill == 'y'){
            fp = fopen("ResturantBill.dat","a+");
            fwrite(&ord,sizeof(struct Orders),1,fp);
            if(fwrite != 0)
            printf("\nSuccessfully Saved");
            
            else
            printf("\nError occured while saving :(");

            fclose(fp);

        }
        break;

        case 2:
        system("cls");
        fp = fopen("ResturantBill.dat","r");
        printf("\n  *****Your Previous Invoices*****\n");
        while(fread(&order,sizeof(struct Orders),1,fp)){
            float tot = 0;
            generateBillHeader(order.customer,order.date);
            for(int i=0; i<order.numOfItems; i++){
                generateBillBody(order.itm[i].item,order.itm[i].qty,order.itm[i].price);
                tot +=order.itm[i].qty * order.itm[i].price;

            }
            generateBillFooter(tot);

        }
        fclose(fp);
        break;

        case 3:
        system("cls");
        printf("Enter the name of the customer:\t");
        fgets(name,50,stdin);
        name[strlen(name)-1] = 0;
        fp = fopen("ResturantBill.dat","r");
        printf("\n  *****Invoice of %s*****\n",name);
        while(fread(&order,sizeof(struct Orders),1,fp)){
            float tot = 0;
            if(!strcmp(order.customer,name)){               
            generateBillHeader(order.customer,order.date);
            for(int i=0; i<order.numOfItems; i++){
                generateBillBody(order.itm[i].item,order.itm[i].qty,order.itm[i].price);
                tot +=order.itm[i].qty * order.itm[i].price;

            }
            generateBillFooter(tot);
            invoiceFound = 1;

            }


        }
        if(!invoiceFound){
            printf("Sorry the invoice for %s doesnot exists :(",name);
        }
        fclose(fp);
        break;

        case 4:
        printf("\n\t\t Bye Bye :)\n\n");
        exit(0);
        break;

        default:
        printf("\n\n\t\tSorry invalid option :(\n\n");
        break;
    }
    printf("\n\nDo you wanna perform another operation?[y/n]:\t");
    scanf("%s",&contFlag);

    }
    printf("\n\n");

    return 0;
}