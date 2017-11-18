#include<stdio.h>

int main()
{
	typedef struct{
        int day,month,year;
    }calendar;

    typedef struct{
        char name[20];
        int age;
        float weight,pay;
    }cow;

    typedef struct{
        char name[30],surname[30];
        char farm[30];
        char member[10],sex[7];
        int age,number,num_ox;
        float ox_weight,weight_avg;
        float ox_pay;
    }profile;

	int n,i,j,num;
	int total_ox = 0;
	float total_weight = 0,avg_weight;
	float total_payment;

	calendar date;

	printf("\t\t\tKokhun Cooperatives Dok Kham Tai\n\n");
	printf("Please enter time in day [XX] : ");
	scanf("%d",&date.day);
	printf("Please enter time in month [XX] : ");
	scanf("%d",&date.month);
	printf("Please enter time in year B.E.[XXXX] : ");
	scanf("%d",&date.year);
	printf("\nPlease input number of farmers : ");
	scanf("%d",&num);

	profile st[num];

	for(i=0;i<num;i++){
        st[i].ox_pay = 0;
        st[i].ox_weight = 0;

		printf("\nPlase enter you first name : ");
		scanf("%s",st[i].name);
		printf("Plase enter you last name : ");
		scanf("%s",st[i].surname);
		printf("Plase enter you sex [Male/Female] : ");
		scanf("%s",st[i].sex);
		printf("Plase enter you age [Year] : ");
		scanf("%d",&st[i].age);
		printf("Plase enter you farm name : ");
		scanf("%s",st[i].farm);
		printf("Plase enter you member [XXXXXXXXX] : ");
		scanf("%s",st[i].member);
		printf("Plase enter you number to day [XX] : ");
		scanf("%d",&st[i].number);
		printf("Plase enter you number of ox [Ox male only] : ");
		scanf("%d",&st[i].num_ox);

		n = st[i].num_ox;
		total_ox += st[i].num_ox;
		cow ox[n];

		for(j=0;j<n;j++){
			printf("\nPlase enter name of ox : ");
			scanf("%s",ox[j].name);
			printf("Plase enter age of ox [Month] : ");
			scanf("%d",&ox[j].age);
			printf("Plase enter weight of ox [Kilogram] : ");
			scanf("%f",&ox[j].weight);

			ox[j].pay = ox[j].weight*110;
			st[i].ox_pay += ox[j].pay;
			st[i].ox_weight += ox[j].weight;
		}

		st[i].weight_avg = st[i].ox_weight/st[i].num_ox;

		printf("\nYou, %s member is %s have number of ox is %d\n",st[i].name,st[i].member,st[i].num_ox);

        for(j=0;j<n;j++){
            printf("\n\t%d. %s\tsex : male\tage : %d month\t\tweight : %.2f kg\tpayment : %.2f baht",j+1,ox[j].name,ox[j].age,ox[j].weight,ox[j].pay);
		}

		printf("\nTotal weight is %.2f kg   Total payment is %.2f baht\n\n",st[i].ox_weight,st[i].ox_pay);

		total_weight += st[i].ox_weight;
	}

	avg_weight = total_weight/total_ox;
	total_payment = total_weight*110;

	printf("\n\n\n\t\t\tThe amount of daily summaries %d/%d/%d.\n",date.day,date.month,date.year);
	printf("\nThe number of farmers today is %d\n",num);

	for(i=0;i<num;i++){
        printf("\n\t%d. %s, %s You, %s   %s\tage : %d year\tsex : %s\tnumber of ox : %d\taverage weight : %.2f kg\tpayment : %.2f baht",i+1,st[i].member,st[i].farm,st[i].name,st[i].surname,st[i].age,st[i].sex,st[i].num_ox,st[i].weight_avg,st[i].ox_pay);
	}

    printf("\n\nAverage weight is %.2f kg\n\nTotal payment is %.2f baht\n",avg_weight,total_payment);

    return 0;
}
