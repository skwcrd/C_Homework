#include<stdio.h>

double installment(double,double,int);

int main(void)
{
    int i,j,k,n,year;
    double intr,sum_init,sum_inter;
    double loan,interest,installments,initial;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf %lf %d",&loan,&intr,&year);
        installments = installment(loan,intr,year);
        for(j=0;j<year;j++){
            sum_init = 0;
            sum_inter = 0;
            for(k=0;k<12;k++){
                interest = (loan*intr)/1200;
                sum_inter += interest;
                initial = installments-interest;
                sum_init += initial;
                loan -= initial;
                if(loan<0)
                    loan *= -1;
            }
            printf("%.2lf %.2lf %.2lf\n",sum_init,sum_inter,loan);
        }
    }
	return 0;
}

double installment(double x,double i,int y)
{
    int z;
    double a,b,sum;
    a = 1200/(1200+i);
    b = y*12;
    sum = a;
    for(z=0;z<b-1;z++){
        sum *= a;
    }
    sum = 1-sum;
    sum = ((x*i)/1200)/sum;
    return sum;
}
