#include<stdio.h>

void show_menu();
//prototype function
//void get_userData(int);

//int main()
main()
{
	int num,menu, i,j;
	struct date{
	//int day, month, year;
		char day[3], month[3], year[5];
	};
	struct customer{
		char name[30];
		char last_name[30];
		char address[300];
		int drug_type,u1,u2,u3,u4,u5,u6,u7;
		unsigned int p1,p2,p3,p4,p5,p6,p7,Total_payment;
		struct date due_date;
	};
	
	printf("\t\t\t+++ Welcome to Ruegroj phamacy +++\n");
	printf("\n\nPlease enter amount of customers : ");
	scanf("%d",&num);
	struct customer cus[num];
	// Process until finish 60 (num) people
	for(i=0;i<num;i++)
	{
		printf("\n\nPlase enter you time in day : ");
		scanf("%s",&cus[i].due_date.day);
		printf("Plase enter you time in month : ");
		scanf("%s",&cus[i].due_date.month);
		printf("Plase enter you time in year : ");
		scanf("%s",&cus[i].due_date.year);
		printf("Plase enter you name : ");
		scanf("%s",&cus[i].name);
		printf("Plase enter you last name : ");
		scanf("%s",&cus[i].last_name);
		printf("Plase enter you address : ");
		scanf("%s",&cus[i].address);
		printf("Plase enter you drug_type (1-7) : ");
		scanf("%d",&cus[i].drug_type);
		//for(j=0;j<cus[i].drug_type,j++)
		show_menu();
		//get_userData(i);
		for(j=0;j<cus[i].drug_type;j++)
		{
			printf("\n\nPlease choose the drug (1-7) : ");
			scanf("%d",&menu);
			if(menu == 1)
			{
				printf("\nPlease enter amount of drug : ");
				scanf("%d",&cus[i].u1);
				cus[i].p1 = cus[i].u1*480;//calculate the drug price
				printf("You choose Novababy 100 ml %d units, your payment for this drug is %u baht",cus[i].u1,cus[i].p1);
			}
			else if (menu == 2)
			{
				printf("\nPlease enter amount of drug : ");
				scanf("%d",&cus[i].u2);
				cus[i].p2 = cus[i].u2*180;//calculate the drug price
				printf("You choose Oxytetracycline LA 100 ml %d units, your payment for this drug is %u baht",cus[i].u2,cus[i].p2);
			}
			else if (menu == 3)
			{
				printf("\nPlease enter amount of drug : ");
				scanf("%d",&cus[i].u3);
				cus[i].p3 = cus[i].u3*60;//calculate the drug price
				printf("You choose Oxycline 100 ml %d units, your payment for this drug is %u baht",cus[i].u3,cus[i].p3);
			}
			else if (menu == 4)
			{
				printf("\nPlease enter amount of drug : ");
				scanf("%d",&cus[i].u4);
				cus[i].p4 = cus[i].u4*70;//calculate the drug price
				printf("You choose Novacilan 100 ml %d units, your payment for this drug is %u baht",cus[i].u4,cus[i].p4);
			}
			else if (menu == 5)
			{
				printf("\nPlease enter amount of drug : ");
				scanf("%d",&cus[i].u5);
				cus[i].p5 = cus[i].u5*330;//calculate the drug price
				printf("You choose Pendistrep LA 100 ml %d units, your payment for this drug is %u baht",cus[i].u5,cus[i].p5);
			}
			else if (menu == 6)
			{
				printf("\nPlease enter amount of drug : ");
				scanf("%d",&cus[i].u6);
				cus[i].p6 = cus[i].u6*2250;//calculate the drug price
				printf("You choose Ivomec-F 200 ml %d units, your payment for this drug is %u baht",cus[i].u6,cus[i].p6);
			}
			else if (menu == 7)
			{
				printf("\nPlease enter amount of drug : ");
				scanf("%d",&cus[i].u7);
				cus[i].p7 = cus[i].u7*50;//calculate the drug price
				printf("You choose Pyrad-violet 500 ml %d units, your payment for this drug is %u baht",cus[i].u7,cus[i].p7);
			}
			else
				printf("\nYou are enter the wrong menu, please choose menu 1-7 again!!!");
		}
		cus[i].Total_payment = cus[i].p1 + cus[i].p2 + cus[i].p3 + cus[i].p4 + cus[i].p5 + cus[i].p6 + cus[i].p7;
		//Conclusion for customer
		printf("\n\n\t\t\tYou choose %d kinds of drugs\n",cus[i].drug_type);
		printf("\n\t1. Novababy 100 ml %d * 480 = %u baht",cus[i].u1,cus[i].p1);
		printf("\n\t2. Oxytetracycline LA 100 ml %d * 180 = %u baht",cus[i].u2,cus[i].p2);
		printf("\n\t3. Oxycline 100 ml %d * 60 = %u baht",cus[i].u3,cus[i].p3);
		printf("\n\t4. Novacilan 100 ml %d * 70 = %u baht",cus[i].u4,cus[i].p4);
		printf("\n\t5. Pendistrep LA 100 ml %d * 330 = %u baht",cus[i].u5,cus[i].p5);
		printf("\n\t6. Ivomec-F 200 ml %d * 2250 = %u baht",cus[i].u6,cus[i].p6);
		printf("\n\t7. Pyrad-violet 100 ml %d * 50 = %u baht",cus[i].u7,cus[i].p7);
		printf("\n\nYour total payment is %u baht",cus[i].Total_payment);
	}
	//Report for officer
	FILE *file;
	file = fopen("drug.txt","w");
	fprintf(file,"\t\t\tSale Order Conclusion\n");
	printf("\n\n\t\t\tSale Order Conclusion\n");
	for(i=0;i<num;i++)
	{
		fprintf(file,"\n%d. %s , type of drugs are %d kids, total payment is %.2f baht",i+1,cus[i].name,cus[i].drug_type,cus[i].Total_payment);
		printf("\n%d. %s , type of drugs are %d kids, total payment is %.2f baht",i+1,cus[i].name,cus[i].drug_type,cus[i].Total_payment);
	}
	fclose(file);
	return 0;
}

void show_menu()
{
	printf("\n\n\t\t\tPlease choose the drug form these menu\n\n");
	printf("\t1. Novababy 100 ml 480 baht\n");
	printf("\t2. Oxytretracycline 100 ml 180 baht\n");
	printf("\t3. Oxycline 100 ml 60 baht\n");
	printf("\t4. Novacilan 100 ml 70 baht\n");
	printf("\t5. Pendistrep LA 100 ml 330 baht\n");
	printf("\t6. Ivomec-F 200 ml 2250 baht\n");
	printf("\t7. Pyrad-violet 500 ml 50 baht\n");
}

