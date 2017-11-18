#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct proflie{
    char firstname[30],lastname[30];
    char id[10];
    char address[100];
    char phone[12];
    int age;
}temp,record[100000];

int num=0;

void main_menu();
void check_choice(int);

int main(void)
{
    char ch;
    int choice;

    do{
        main_menu();
        printf("\nEnter your choice [1-5] : ");
        scanf("%d",&choice);
        while(choice<1||choice>5){
            printf("Enter your choice again [1-5] : ");
            scanf("%d",&choice);
        }
        check_choice(choice);
        printf("\nDo you went start program again? [Y/n] : ");
        scanf("%s",&ch);
    }while(toupper(ch)=='Y');
    return 0;
}

void main_menu()
{
    printf("\n\t\t\t-----***## Welcome to main menu of employee record ##***-----\n\n");
    printf("-->Please select the menu that you need to process\n");
    printf("\t1. Record all data of employee\n");
    printf("\t2. Record date of the new employee\n");
    printf("\t3. Delete some employee record\n");
    printf("\t4. Update some employee record\n");
    printf("\t5. Show all employee record\n");
}

void swap()
{
    int i,j;
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            if(strcmpi(record[i].id,record[j].id)>=0){
                temp = record[i];
                record[i] = record[j];
                record[j] = temp;
            }
        }
    }
}

void data_record()
{
    int i,j,n;
    printf("\n\t\t\t********** Welcome to record data of employee **********\n\n");
    for(i=num,j=1;;i++,j++,num++){
        printf("\nRECORD #%02d :\n",j);
        printf("\tID : ");
        scanf("%s",record[i].id);
        printf("\tFIRSTNAME : ");
        scanf("%s",record[i].firstname);
        printf("\tSURNAME : ");
        scanf("%s",record[i].lastname);
        printf("\tAGE : ");
        scanf("%d",&record[i].age);
        printf("\tADDRESS : ");
        scanf("%s",record[i].address);
        printf("\tPHONE : ");
        scanf("%s",record[i].phone);
        printf("\n\t\t\t---------- Welcome to delete some employee record ----------\n\n");
    }
}

void add_data()
{
    int i,j;
    printf("\n\t\t\t@@@@@@@@@@ Welcome to record date of the new employee @@@@@@@@@@\n\n");
}

void sub_data()
{
    int i;
    printf("\n\t\t\t---------- Welcome to delete some employee record ----------\n\n");
}

void change_data()
{
    int i;
    printf("\n\t\t\t&&&&&&&&&& Welcome to update some employee record &&&&&&&&&&\n\n");
}

void show_detail()
{
    int i;
    printf("\n\t\t\t########## Welcome to show all employee record ##########\n\n");
    for(i=0;i<num;i++)
        printf("[%02d] %s ,%s   %s ,Age : %d year ,Address : %s ,Tel. %s"i+1,record[i].id,record[i].firstname,record[i].lastname,record[i].age,record[i].address,record[i].phone);
}

void check_choice(int n)
{
    switch(n)
    {
    case 1 :
        data_record();
        break;
    case 2 :
        add_data();
        break;
    case 3 :
        sub_data();
        break;
    case 4 :
        change_data();
        break;
    case 5 :
        show_detail();
        break;
    }
}
