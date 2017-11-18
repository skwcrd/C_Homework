//01
/*
#include<stdio.h>

int main()
{
    typedef struct{
        char name[30],surname[30];
        char grade,id[10];
        float score;
    }student;

    char ch;
    int i,num;

    do{
        printf("\n\t\t\tComputer Programming\n\n");
        printf("Please enter number of students : ");
        scanf("%d",&num);

        student st[num];

        for(i=0;i<num;i++){
            printf("\nPlease enter first name of students : ");
            scanf("%s",st[i].name);
            printf("Please enter last name of students : ");
            scanf("%s",st[i].surname);
            printf("Please enter identification number of students [XXXXXXXX] : ");
            scanf("%s",st[i].id);

            do{
                printf("Please enter score of students [0-100] : ");
                scanf("%f",&st[i].score);
                if((st[i].score<0)||(st[i].score>100)){
                    printf("\n\tYou enter incorrect score.\n\n");
                }
            }while((st[i].score<0)||(st[i].score>100));

            if((st[i].score<=100)&&(st[i].score>=90)){
                st[i].grade = 'A';
            }
            else if((st[i].score<90)&&(st[i].score>=80)){
                st[i].grade = 'B';
            }
            else if((st[i].score<80)&&(st[i].score>=70)){
                st[i].grade = 'C';
            }
            else if((st[i].score<70)&&(st[i].score>=60)){
                st[i].grade = 'D';
            }
            else{
                st[i].grade = 'F';
            }

            printf("\n%s, %s   %s",st[i].id,st[i].name,st[i].surname);
            printf("\nScore is %.2f , Grade is %c\n",st[i].score,st[i].grade);
        }

        printf("\n\t\t\tSummary of grades, Computer Programming\n");

        for(i=0;i<num;i++){
            printf("\n%d. %s %s   %s\tscore : %.2f\tgrade : %c",i+1,st[i].id,st[i].name,st[i].surname,st[i].score,st[i].grade);
        }

        printf("\n\nYou want to end the program or not [Y/N] : ");
        scanf("%s",&ch);
    }while((ch!='Y')&&(ch!='y'));

    return 0;
}
*/

//02
/*
#include<stdio.h>
#include<math.h>

#define PI 3.141592653589793
#define G 9.81

int main()
{
    char ch;
    double x,y,u,t;
    double H_max,Sx_max;
    double angle,degree;

    do{
        printf("\n\t\t\tProjectile Motion\n\n");
        printf("Please enter initial velocity [m/s] : ");
        scanf("%lf",&u);
        printf("Please enter degree : ");
        scanf("%lf",&degree);
        angle = degree*(PI/180);
        x = u*cos(angle);
        y = u*sin(angle);

        printf("\nInitial velocity on axis X is %.3lf m/s",x);
        printf("\nInitial velocity on axis Y is %.3lf m/s",y);

        Sx_max = ((pow(u,2))*(sin(2*angle)))/G;
        H_max = ((pow(u,2))*(sin(2*angle)))/(2*G);
        t = (2*y)/G;

        printf("\nHorizontal distance moving objects farthest is %.3lf meters",Sx_max);
        printf("\nMaximum height is %.3lf meters",H_max);
        printf("\nTotal time is %.3lf sec",t);

        printf("\n\nYou want to again the program or not [Y/N] : ");
        scanf("%s",&ch);
    }while((ch!='N')&&(ch!='n'));

    return 0;
}
*/
