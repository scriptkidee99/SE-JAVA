#include<stdio.h>
int isPrime(int);
void main(){
    int start,end,i;
    printf("Enter start and end for finding list of prime numbers : ");
    scanf("%d%d",&start,&end);
    printf("\nThe list of prime numbers is ");
    for(i=start;i<=end;i++){
        if(isPrime(i)) printf(" %d ",i);
    }

}
int isPrime(int no){
    int i,yes = 1;
    for(i=2;i<(no/2)+1;i++){
        if(no%i==0){
            yes = 0;
            break;
        }
    }
    return yes;
}
