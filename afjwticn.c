#include<stdio.h>
#include<math.h>

typedef struct{
    char id[9],first_name[30],last_name[30];
    char grade;
    double score;
}student;

int main(void)
{
    int i,j,num;
    double sd=0,mean,sum=0;
    scanf("%d",&num);
    student st[num];
    student *pt[num];
    student *temp;
    for(i=0;i<num;i++)
        pt[i] = &st[i];
    for(i=0;i<num;i++){
        scanf("%s %s %s %lf",st[i].id,st[i].first_name,st[i].last_name,&st[i].score);
        sum += st[i].score;
        sd += pow(st[i].score,2);
    }
    mean = sum/num;
    sum = (sd/num)-pow(mean,2);
    sd = sqrt(sum);
    for(i=0;i<num;i++){
        if(st[i].score>(mean+sd))
            st[i].grade = 'A';
        else if(st[i].score>(mean+sd/2))
            st[i].grade = 'B';
        else if(st[i].score>(mean-sd/2))
            st[i].grade = 'C';
        else if(st[i].score>(mean-sd))
            st[i].grade = 'D';
        else
            st[i].grade = 'F';
    }
    for(i=0;i<num-1;i++){
        for(j=0;j<num-1;j++){
            if((*pt[j]).score<(*pt[j+1]).score){
                temp = pt[j];
                pt[j] = pt[j+1];
                pt[j+1] = temp;
            }
        }
    }
    printf("mean = %.2lf\nsd = %.2lf\n",mean,sd);
    for(i=0;i<num;i++)
        printf("%s %s %s %.2lf %c\n",(*pt[i]).id,(*pt[i]).first_name,(*pt[i]).last_name,(*pt[i]).score,(*pt[i]).grade);
    return 0;
}
