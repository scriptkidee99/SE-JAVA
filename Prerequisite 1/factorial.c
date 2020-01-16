#include<stdio.h>
void main(){
    int no,fact=1,i;
    printf("Enter no to find its factorial : ");
    scanf("%d",&no);
    for(i=1;i<=no;i++) fact *= i;
    printf("The factorial of %d is %d",no,fact);
}
