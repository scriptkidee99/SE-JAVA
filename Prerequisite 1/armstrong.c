#include<stdio.h>
int cube(int,int);
void main(){
    int no,no2,no3,sum=0,digitCount=0;
    printf("Enter no to check whether it is armstrong number or not : ");
    scanf("%d",&no);
    no2=no3=no;
    while(no3>0){
        digitCount += 1;
        no3/=10;
    }
    while(no2>0){
        printf("\nPower is %d",power(no2%10,digitCount));
        sum += power(no2%10,digitCount);
        printf("\nSum is %d",sum);
        no2 /= 10;
    }
    //printf("Sum is %d",sum);
    if(sum == no){
        printf("The number %d is an armstrong number",no);
    }
    else{
        printf("The number %d is not an armstrong number",no);
    }
}

int power(int no, int pow){
    int i,result=1;
    for(i=0;i<pow;i++){
        result *= no;
    }
    return result;
}

