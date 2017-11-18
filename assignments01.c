/*
#include<stdio.h>
int main()
{
	
	return 0;
}
*/

//assignments1
/*
#include<stdio.h>
int main()
{
	int i,sum;
	
	printf("\tTimes Tables\n\n");
	
	for(i=1;i<=12;i++){
		sum = i*2;
		printf("2 x %d = %d\n",i,sum);
	}
	return 0;
}
*/

//assignments2
/*
#include<stdio.h>
int main()
{
	int i,vowel = 0,nonVowel = 0;
	char letter[21];
	
	printf("Please input lowercase letters (a-z) 20 letter : ");
	scanf("%s",letter);
	
	for(i=0;i<20;i++){
		if((letter[i] == 'a')||(letter[i] == 'e')||(letter[i] == 'i')||(letter[i] == 'o')||(letter[i] == 'u')){
			vowel++;
		}
		else{
			nonVowel++;
		}
	}
	
	printf("\nVowel amount is %d letter\n",vowel);
	printf("Alphabet amount is %d letter\n",nonVowel);
	
	return 0;
}
*/

//assignments3
/*
#include<stdio.h>
int main()
{
	int i=0,cash_1000,cash_500,cash_100,sum=0;
	int pass,money,check;
	char ch;
	
	printf("\t\t\tAll bank cards are welcome.\n\n");
	
	do{
		printf("Please enter your pin [XXXX] : ");
		scanf("%d",&pass);
		if(pass != 1024){
			printf("\n\n\tIncorrect password!!!\n\n\n");
		}
		i++;
	}while((i!=3)&&(pass!=1024));
	
	if(pass==1024){
		do{
			printf("\nPlease enter amount [100-20000] : ");
			scanf("%d",&money);
		
			check = money%100;
		
			if((money>=100)&&(money<=20000)&&(check==0)){
				cash_1000 = money/1000;
				sum = money%1000;
				cash_500 = sum/500;
				sum = sum%500;
				cash_100 = sum/100;
			
				printf("\n\tThe amount of banknotes in 1000 is %d\n",cash_1000);
				printf("\tThe amount of banknotes in 500 is %d\n",cash_500);
				printf("\tThe amount of banknotes in 100 is %d\n",cash_100);
				printf("\nAll amount is %.2f baht\n",(float)money);
			}
			else{
				printf("\n\n\tInvaild amount!!!\n\n");
			}
			
			printf("\nYour transaction is completed, ");
			printf("Do you want again or not [Y/N] : ");
			scanf("%s",&ch);
			
		}while((ch!='N')&&(ch!='n'));
	}
	else{
		printf("\tTransaction failed due to invalid/suspended card. ");
		printf("Please bring card, passport & passbook to issuing branch for new card.\n");
	}
	return 0;
}
*/

//assignments4
/*
#include<stdio.h>
int main()
{
	int i,j,num;
	
	printf("Please enter number : ");
	scanf("%d",&num);
	printf("\n");
	for(i=1;i<=num;i++){
		if(i==1){
			for(j=1;j<=num;j++){
				printf("*");
			}
		}
		if((i!=1)&&(i!=num)){
			for(j=1;j<=num;j++){
				if(j==1){
					printf("\n");
					printf("*");
				}
				if((j!=1)&&(j!=num)){
					printf(" ");
				}
				if(j==num){
					printf("*");
				}
			}
		}
		if(i==num){
			printf("\n");
			for(j=1;j<=num;j++){
				printf("*");
			}
		}
	}
	return 0;
}
*/

//Assignments5
/*
#include<stdio.h>

int count1 = 0,count2 = 0,count3 = 0,count4 = 0;
int pay1 = 0,pay2 = 0,pay3 = 0,pay4 = 0;

int order(int);
void menu();

int main()
{
	int select,total;
	
	printf("\t\t\tWelcome to restaurant\n\n");
	
	do{
		menu();
		printf("\nSelect menu : ");
		scanf("%d",&select);
		total = order(select);
	}while(select != 0);

	printf("Total payment : %.2f baht\n",(float)total);

	return 0;
}

int order(int s)
{
	int sum;
	
	printf("\n\nYou have :\n\n");

	if(s==1){
		count1++;
		pay1 = count1*150;
	}
	else if(s==2){
		count2++;
		pay2 = count2*50;
	}
	else if(s==3){
		count3++;
		pay3 = count3*25;
	}
	else if(s==4){
		count4++;
		pay4 = count4*10;
	}
	
	printf("\tPizza\t\t%d * 150 : %d baht\n",count1,pay1);
	printf("\tHamburger\t%d * 50 : %d baht\n",count2,pay2);
	printf("\tSandwich\t%d * 25 : %d baht\n",count3,pay3);
	printf("\tWater\t\t%d * 10 : %d baht\n\n\n",count4,pay4);

	sum = pay1+pay2+pay3+pay4;

	return sum;
}

void menu()
{
	printf("1. Pizza\t150 baht\n");
	printf("2. Hamburger\t50 baht\n");
	printf("3. Sandwich\t25 baht\n");
	printf("4. Water\t10 baht\n");
	printf("0. Calculate money\n");
}
*/

//assignments6
/*
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

		printf("\nPlease enter you first name : ");
		scanf("%s",st[i].name);
		printf("Please enter you last name : ");
		scanf("%s",st[i].surname);
		printf("Please enter you sex [Male/Female] : ");
		scanf("%s",st[i].sex);
		printf("Please enter you age [Year] : ");
		scanf("%d",&st[i].age);
		printf("Please enter you farm name : ");
		scanf("%s",st[i].farm);
		printf("Please enter you member [XXXXXXXXX] : ");
		scanf("%s",st[i].member);
		printf("Please enter you number to day [XX] : ");
		scanf("%d",&st[i].number);
		printf("Please enter you number of ox [Ox male only] : ");
		scanf("%d",&st[i].num_ox);

		n = st[i].num_ox;
		total_ox += st[i].num_ox;
		cow ox[n];

		for(j=0;j<n;j++){
			printf("\nPlease enter name of ox : ");
			scanf("%s",ox[j].name);
			printf("Please enter age of ox [Month] : ");
			scanf("%d",&ox[j].age);
			printf("Please enter weight of ox [Kilogram] : ");
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
*/

