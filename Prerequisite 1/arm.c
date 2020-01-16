#include<stdio.h>
void main(){
    int no,count=0;
    char arr[100];
    printf("Enter no : ");
    scanf("%d",&no);
    while(no>0){
        arr[count] = (char) no%10;
        no/=10;
    }
    printf(" rev is %s",arr);
}
