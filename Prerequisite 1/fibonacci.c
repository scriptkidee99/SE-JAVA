#include<stdio.h>
void main(){
    int limit,series[100],noCount = 1,i;
    printf("Enter no till which you want the fibonacci series : ");
    scanf("%d",&limit);
    series[0] = 0;
    series[1] = 1;
    while(series[noCount]<=limit){
        series[noCount+1] = series[noCount] + series[noCount-1];
        noCount++;
    }
    printf("The fibonacci series is ",series[1]);
    for(i=0;i<noCount;i++) printf(" %d ",series[i]);
}
