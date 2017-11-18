#include<stdio.h>
#include<math.h>

int main(void)
{
    int x,y,n;
    double m,o=0,t=0;
    struct profile{
        char i[9];
        char f[30];
        char l[30];
        double s;
        char g;
    };
    scanf("%d",&n);
    struct profile student[n];
    struct profile *ptr_student[n];
    struct profile *ptr_temp;
    for(x=0;x<n;x++)
        ptr_student[x] = &student[x];
    for(x=0;x<n;x++){
        scanf("%s",student[x].i);
        scanf("%s",student[x].f);
        scanf("%s",student[x].l);
        scanf("%lf",&student[x].s);
        t = t+student[x].s;
        o = o+pow(student[x].s,2);
    }
    m = t/n;
    t = pow(m,2);
    t = (o/n)-t;
    o = sqrt(t);
    for(x=0;x<n-1;x++){
        for(y=0;y<n-1;y++){
            if((*ptr_student[y]).s<(*ptr_student[y+1]).s){
                ptr_temp = ptr_student[y];
                ptr_student[y] = ptr_student[y+1];
                ptr_student[y+1] = ptr_temp;
            }
        }
    }
    for(x=0;x<n;x++){
        if(student[x].s>(m+o))
            student[x].g = 'A';
        else if(student[x].s>(m+o/2))
            student[x].g = 'B';
        else if(student[x].s>(m-o/2))
            student[x].g = 'C';
        else if(student[x].s>(m-o))
            student[x].g = 'D';
        else
            student[x].g = 'F';
    }
    printf("mean = %.2lf\n",m);
    printf("sd = %.2lf\n",o);
    for(x=0;x<n;x++){
        printf("%s ",(*ptr_student[x]).i);
        printf("%s ",(*ptr_student[x]).f);
        printf("%s ",(*ptr_student[x]).l);
        printf("%.2lf ",(*ptr_student[x]).s);
        printf("%c\n",(*ptr_student[x]).g);
    }
    return 0;
}
