#include<stdio.h>
#include<stdlib.h>
struct Employee{
    char name[20],id[5];
    float salery;
};
struct Employee e;
float display();
float withdraw();
float deposit();
void main(){
    int choice;
    printf("Enter employee name : ");
    scanf("%s",e.name);
    printf("\nEnter employee id : ");
    scanf("%s",e.id);
    printf("\nEnter employee salery : ");
    scanf("%f",&e.salery);
    while(1){
        printf("\n\n\nMENU\n\t1.Display\n\t2.Diposit\n\t3.Withdraw\n\t4.Exit\nEnter Operation : ");
        scanf("%d",&choice);
        switch (choice){
        case 1:
            display();
            break;

        case 2:
            deposit();
            break;

        case 3:
            withdraw();
            break;

        case 4:
            exit(0);

        default:
            printf("\nIncorrect input");
        }
    }
}
float display(){
    printf("\nThe balence of %s is %f",e.name,e.salery);
    return e.salery;
}

float deposit(){
    float money;
    printf("\nEnter amount to deposit : ");
    scanf("%f",&money);
    e.salery += money;
    return e.salery;
}

float withdraw(){
    float money;
    printf("\nEnter amount to withdraw : ");
    scanf("%f",&money);
    e.salery -= money;
    return e.salery;
}


