#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
char name[100];
int roll_no;
float cgpa;
}student;

void readStudent(Student *s){
printf("enter name: ");
scanf("%[^\n]",s->name);
printf("enter roll number: ");
scanf("%d",&(s->roll_no));
printf("enter CGPA: ");
scanf("%f",&(s->cgpa));
}

void displayStudent(const Student *s){
printf("Name: %s\n",s->name);
printf("Roll no: %d\n",s->roll_no);
printf("CGPA: %.2f\n", s->cgpa);
}

void sortStudentsByRollNumber(Student *studens,int count){
for(i=o;i<count -1;i++){
    for(int j= i+1;j< count ;j++){
        if(students[i].roll_no>students[j].roll_no){
            student temp = students[i];
            students[i] = students[j];
            students[j] = temp;
        }
    }
}
}

int main()
int n,i,j;
