#include<stdio.h>
#include<math.h>

int main(void)
{
    /*
    int i,j,k,n,year;
    double a,b,intr,sum,sum_init,sum_inter;
    double loan,interest,installment,initial;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf %lf %d",&loan,&intr,&year);
        a = 1200/(1200+intr);
        b = year*12;
        sum = 1-pow(a,b);
        installment = ((loan*intr)/1200)/sum;
        for(j=0;j<year;j++){
            sum_init = 0;
            sum_inter = 0;
            for(k=0;k<12;k++){
                interest = (loan*intr)/1200;
                sum_inter += interest;
                initial = installment-interest;
                sum_init += initial;
                loan -= initial;
                if(loan<0)
                    loan *= -1;
            }
            printf("%.2lf %.2lf %.2lf\n",sum_init,sum_inter,loan);
        }
    }

    for(;;){
        long long x;
        int i,j,n,s,sum=0;
        scanf("%lld",&x);
        if(x==0)
            break;
        else{
            s = x%10;
            x = x/10;
            for(i=0,j=2;i<12;i++,j++){
                n=x%10;
                x=x/10;
                sum = sum+(n*j);
            }
            sum = sum%11;

            if(sum>1)
                sum = 11-sum;
            else
                sum = 1-sum;

            if(sum==s)
                printf("yes\n");
            else
                printf("no\n");
        }
    }

    for(;;){
        char x[14];
        int i,j,n,s,a,sum=0;
        scanf("%s",x);
        if((x[0]%48)==0)
            break;
        else{
            for(i=0,j=13;i<12;i++,j--){
                n=x[i]%48;
                sum = sum+(n*j);
            }
            sum = sum%11;

            if(sum>1)
                sum = 11-sum;
            else
                sum = 1-sum;

            if(sum==(x[12]%48))
                printf("yes\n");
            else
                printf("no\n");
        }
    }

    int i,j;
    int value,num[4];
    for(;;){
        scanf("%d %d %d",&num[0],&num[1],&num[2]);
        if((num[0]==0)&&(num[1]==0)&&(num[2]==0))
            break;
        for(i=0;i<3;i++){
            value = num[i];
            for(j=i;j>=0;j--){
                if((value>=num[j])&&(j>0)){
                    value = num[j-1];
                    num[j-1] = num[j];
                    num[j] = value;
                }
                else if((value<=num[j])&&(j<2)){
                    value = num[j+1];
                    num[j+1] = num[j];
                    num[j] = value;
                }
            }
        }
        printf("%d %d %d\n",num[0],num[1],num[2]);
    }

    int a,b,c,d;
    for(;;){
        scanf("%d %d %d",&a,&b,&c);
        if(((a>0)&&(a<=1000))&&((b>0)&&(b<=1000))&&((c>0)&&(c<=1000))){
            if(a>=b){
                d = b;
                b = a;
                a = d;
                if(b>=c){
                    d = c;
                    c = b;
                    b = d;
                }
            }
            if(a<=b){
                if(b>=c){
                    d = c;
                    c = b;
                    b = d;
                }
            }
            if(a>=c){
                d = c;
                c = a;
                a = d;
                if(b>=c){
                    d = c;
                    c = b;
                    b = d;
                }
            }
            if(a<=c){
                if(a>=b){
                    d = b;
                    b = a;
                    a = d;
                }
            }
            printf("%d %d %d\n",a,b,c);
        }
        else if((a==0)&&(b==0)&&(c==0))
            break;
    }

    double num;
    for(;;){
        scanf("%lf",&num);
        if(num>10000)
            num *= 0.2;
        else if(num>5000)
            num *= 0.15;
        else if(num>1000)
            num *= 0.1;
        else if(num>500)
            num *= 0.05;
        else if(num>0)
            num *= 0.02;
        else
            break;
        printf("%.2lf\n",num);
    }

    int i,n,b;
    int score,num;
	scanf("%d",&n);
    for(i=0;i<n;i++){
        score = 25;
        for(;;){
            scanf("%d",&b);
            if(b==0)
                break;
            else
                score += b/30;
        }
        if(score>=30){
            if(score>=200){
                num = score/200;
                score = score%200;
                printf("luggage %d ",num);
            }
            if(score>=100){
                num = score/100;
                score = score%100;
                printf("suitcase %d ",num);
            }
            if(score>=70){
                num = score/70;
                score = score%70;
                printf("thermos flask %d ",num);
            }
            if(score>=45){
                num = score/45;
                score = score%45;
                printf("gap %d ",num);
            }
            if(score>=35){
                num = score/35;
                score = score%35;
                printf("bag %d ",num);
            }
            if(score>=30){
                num = score/30;
                score = score%30;
                printf("glass %d ",num);
            }
            printf("\n");
        }
        else
            printf("0\n");
    }

    int x,i,n,sum=0;
    scanf("%d",&x);
    if((x>1000000)||(x<0)){
        printf("Error");
    }
    else{
        for(i=10;x>0;){
            n = x%i;
            x = x/i;
            sum = sum + n;
        }
        printf("%d",sum);
    }

    int u;
    float pay;
    for(;;){
        scanf("%d",&u);
        if((u>=0)&&(u<=1000)){
            if(u>50){
                pay = 8.19+(1.8632*15)+(2.5026*10)+(2.7549*10);
                if(u>400){
                    u = u-400;
                    pay = pay+(u*3.9361);
                    u = 400;
                }
                if((u>150)&&(u<=400)){
                    u = u-150;
                    pay = pay+(u*3.7362);
                    u = 150;
                }
                if((u>100)&&(u<=150)){
                    u = u-100;
                    pay = pay+(u*3.2315);
                    u = 100;
                }
                if((u>35)&&(u<=100)){
                    u = u-35;
                    pay = pay+(u*3.1381);
                    u = 35;
                }
            }
            else
                pay = 0;
        }
        else
            break;

        printf("pay %.2f baht\n",pay);
    }

    int i,num;
    float capacity,rate,flow;
    float sum;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        scanf("%f %f %f",&capacity,&rate,&flow);
        sum = capacity/(flow-rate);
        if(sum>=0)
            printf("%.3f\n",sum);
        else
            printf("NoeyWillNotTolerate\n");
    }

    int i,j,x;
    for(;;){
        scanf("%d",&x);
        if((x>0)&&(x<10)){
            for(i=1;i<=x;i++){
                for(j=1;j<=i;j++){
                    printf("%d",j);
                }
                printf("\n");
            }
            for(i=(x-1);i>=1;i--){
                for(j=1;j<=i;j++){
                    printf("%d",j);
                }
                printf("\n");
            }
        }
        else
            break;
    }

    long long n,m;
    scanf("%lld",&n);
    while(n>-1){
        scanf("%lld",&m);
        if(n>=100)
            n = n+((n/100)*20);
        else
            n = n+((n*20)/100);
        if(n>=m)
            printf("Attack\n");
        else
            printf("Wait\n");
        scanf("%lld",&n);
    }

    int i,prime,num,check;
	scanf("%d",&num);
	while(num!=0){
        prime=1;
        for(i=2;i<num;i++){
            check = (num%i==0)?0:1;
            prime *= check;
        }
        if(prime==1)
            printf("yes\n");
        else
            printf("no\n");
        scanf("%d",&num);
    }

    int i,t,n,ch;
	for(;;){
        scanf("%d",&n);
        if((n>0)&&(n<=1000000)){
            t=1;
            for(i=2;i<n;i++){
                ch = (n%i==0)?0:1;
                t = t*ch;
            }
            if(t==1)
                printf("yes\n");
            else
                printf("no\n");
        }
        else if(n==0)
            break;
	}

	for(;;){
        int i,j,total;
        scanf("%d",&total);
        if(total<1)
            break;
        else{
            int value,numbers[total];
            for(i=0;i<total;i++){
                scanf("%d",&numbers[i]);
            }
            for(i=0;i<total;i++){
                value = numbers[i];
                for(j=i;j>=0;j--){
                    if((value>=numbers[j])&&(j>0)){
                        value = numbers[j-1];
                        numbers[j-1] = numbers[j];
                        numbers[j] = value;
                    }
                    else if((value<=numbers[j])&&(j<=total-1)){
                        value = numbers[j+1];
                        numbers[j+1] = numbers[j];
                        numbers[j] = value;
                    }
                }
            }
            for(i=0;i<total;i++){
                printf("%d ",numbers[i]);
            }
            printf("\n");
        }
    }

    int period;
    double rate,loan,down,month;
    double interest,payment;
    scanf("%lf %d",&loan,&period);
    if((loan>1000000000000)||(loan<0))
        printf("loan more than zero and less than or one billion\n");
    else if((period>7)||(period<3))
        printf("loan yearly payment more than 2 and less than 8\n");
    else{
        switch(period)
        {
        case 3:
            rate = 0.03;
            break;
        case 4:
            rate = 0.04;
            break;
        case 5:
            rate = 0.05;
            break;
        case 6:
            rate = 0.06;
            break;
        default:
            rate = 0.07;
            break;
        }
        month = period*12;
        down = 0.25*loan;
        loan = loan-down;
        interest = rate*loan*period;
        interest = interest/month;
        payment = (loan/month)+interest;
        printf("interest/month = %.2lf baht\npayment/month = %.2lf baht\n",interest,payment);
    }
	*/
	printf("\n\n||**=|*******=******|=*****=|****=***|=**=|* Thank you. *|=**=|***=****|=*****=|******=*******|=**||\n\n");
	return 0;
}
