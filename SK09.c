#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,j,num;
    double mean,sd,mean_sum=0,sd_sum=0,sd_sum1;
    struct student{
        char firstname[15],surname[15];
        char grade;
        float point;
        int id;
    }temp;
    scanf("%d",&num);
    struct student stu[num];
    for(i=0;i<num;i++){
        scanf("%d %s %s %f",&stu[i].id,stu[i].firstname,stu[i].surname,&stu[i].point);
        mean_sum += stu[i].point;
    }
    mean = mean_sum/num;
    for(i=0;i<num;i++){
        sd_sum1 = stu[i].point-mean;
        sd_sum += pow(sd_sum1,2);
    }
    sd_sum /= num;
    sd = sqrt(sd_sum);
    for(i=0;i<num;i++){
        if(stu[i].point>(mean+sd))
            stu[i].grade = 'A';
        else if(stu[i].point>(mean+(sd/2)))
            stu[i].grade = 'B';
        else if(stu[i].point>(mean-(sd/2)))
            stu[i].grade = 'C';
        else if(stu[i].point>(mean-sd))
            stu[i].grade = 'D';
        else
            stu[i].grade = 'F';
    }
    for(i=0;i<num-1;i++){
        for(j=0;j<num-1;j++){
            if(stu[j].point<stu[j+1].point){
                temp = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = temp;
            }
            if(stu[j].point==stu[j+1].point){
                if(stu[j].id<stu[j+1].id){
                    temp = stu[j];
                    stu[j] = stu[j+1];
                    stu[j+1] = temp;
                }
            }
        }
    }
    printf("mean = %.2lf\n",mean);
    printf("sd = %.2lf\n",sd);
    for(i=0;i<num;i++)
        printf("%d %s %s %.2f %c\n",stu[i].id,stu[i].firstname,stu[i].surname,stu[i].point,stu[i].grade);
    return 0;
}
