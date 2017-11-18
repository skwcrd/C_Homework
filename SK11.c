#include<stdio.h>

float pay;

int main(void)
{
    int u;
    scanf("%d",&u);
    while(u>-1){
        if(u<=50)
            pay = 0;
        else
            rate(u);
        printf("pay %.2f baht\n",pay);
        scanf("%d",&u);
    }
    return 0;
}

void rate(int unit)
{
    pay = 8.19+(1.8632*15)+(2.5026*10)+(2.7549*10);
    if(unit>400){
        unit -= 400;
        pay = pay+(unit*3.9361);
        unit = 400;
    }
    if(unit>150){
        unit -= 150;
        pay = pay+(unit*3.7362);
        unit = 150;
    }
    if(unit>100){
        unit -= 100;
        pay = pay+(unit*3.2315);
        unit = 100;
    }
    if(unit>35){
        unit -= 35;
        pay = pay+(unit*3.1381);
        unit = 35;
    }
}

/*#include<stdio.h>
void num(int);
int main(void)
{
    int i,j,x;
    scanf("%d",&x);
    while(x>0&&x<10){
        for(i=1;i<=x;i++)
            num(i);
        for(i=(x-1);i>=1;i--)
            num(i);
        scanf("%d",&x);
    }
	return 0;
}

void num(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d",i);
    printf("\n");
}*/
