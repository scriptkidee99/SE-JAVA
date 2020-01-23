#include<stdio.h>
struct student{
    char name[20],roll[5],grade;
    int marks[5];
    float avg;
};
struct student s;
void findAverageMarks();
void main(){
    int i;
    printf("Enter student name : ");
    scanf("%s",s.name);
    printf("\nEnter roll no : ");
    scanf("%s",s.roll);
    printf("\nEnter marks");
    for(i=0;i<5;i++){
        printf("\nEnter marks for subject %d : ",i+1);
        scanf("%d",&s.marks[i]);
    }
    findAverageMarks(s);
    printf("\nThe average marks of student %s are %f and his grade is %c\n\n\n",s.name,s.avg,s.grade);
}
void findAverageMarks(){
    int i;
    s.avg = 0;
    for(i=0;i<5;i++){
        s.avg += s.marks[i];
    }
    s.avg /= 5.0;
    if(s.avg>=90.0){
        s.grade = 'A';
    }
    else if(s.avg>=80.0){
        s.grade = 'B';
    }
    else if(s.avg>=70.0){
        s.grade = 'C';
    }
    else if(s.avg>=60.0){
        s.grade = 'D';
    }
    else if(s.avg>=50.0){
        s.grade = 'E';
    }
    else{
        s.grade = 'F';
    }
}
