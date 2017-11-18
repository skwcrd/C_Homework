#include<stdio.h>

typedef struct{
    char firstname[30],surname[30],id[10];
    float grade;
    int age;
}student;

int num;

int main(void)
{
    int i;
    float avg_grade=0,avg_age=0;
    printf("Please enter number of student : ");
    scanf("%d",&num);
    student stu[num];
    student *st = stu;
    for(i=0;i<num;i++){
        printf("\n--------------------------------------------------\n");
        printf("The person that #%02d\n",i+1);
        printf("\tStudent ID : ");
        scanf("%s",stu[i].id);
        printf("\tStudent NAME : ");
        scanf("%s %s",stu[i].firstname,stu[i].surname);
        printf("\tStudent AGE [Year] : ");
        scanf("%d",&stu[i].age);
        printf("\tStudent GRADE : ");
        scanf("%f",&stu[i].grade);
        avg_age += stu[i].age;
        avg_grade += stu[i].grade;
    }
    avg_age /= num;
    avg_grade /= num;
    printf("\n-------------------- STUDENT LIST --------------------\n");
    for(i=0;i<num;i++){
        printf("%s   %s %s   %d   %.2f\n",(*(st+i)).id,(*(st+i)).firstname,(*(st+i)).surname,(*(st+i)).age,(*(st+i)).grade);
    }
    printf("\nAverage age is %.2f year\nAverage grade is %.2f",avg_age,avg_grade);
    return 0;
}
