#include<stdio.h>
void main(){
    int numberOfMonth;
    printf("Enter no of month you want to convert : ");
    scanf("%d",&numberOfMonth);
    switch(numberOfMonth){
    case 1:
        printf("The month is January");
        break;

    case 2:
        printf("The month is February");
        break;

    case 3:
        printf("The month is March");
        break;

    case 4:
        printf("The month is April");
        break;

    case 5:
        printf("The month is May");
        break;

    case 6:
        printf("The month is June");
        break;

    case 7:
        printf("The month is July");
        break;

    case 8:
        printf("The month is August");
        break;

    case 9:
        printf("The month is September");
        break;

    case 10:
        printf("The month is October");
        break;

    case 11:
        printf("The month is November");
        break;

    case 12:
        printf("The month is December");
        break;

    default:
        printf("Wrong input");
    }
}
