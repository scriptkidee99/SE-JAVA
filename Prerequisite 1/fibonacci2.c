#include<stdio.h>
void main(){
    int limit,no1=0,no2=1,temp,i;
    printf("Enter limit to find series : ");
    scanf("%d",&limit);
    printf(" 0 ");
    //while(no2<=limit){
    for(i=0;i<limit;i++){
        printf(" %d ",no2);
        temp = no2;
        no2 = no2 + no1;
        no1 = temp;
    }
}
