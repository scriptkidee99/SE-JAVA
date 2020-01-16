#include<stdio.h>
void main(){
    int no,reverse=0,perm;
    printf("Enter a number to find its reverse number : ");
    scanf("%d",&no);
    perm=no;
    while(no>0){
        reverse = (reverse*10) + no%10;
        no/=10;
    }
    printf("The reverse of %d is %d",perm,reverse);
}
