#include<stdio.h>

int main(void)
{
    int i,n,b;
    int score,num;
	scanf("%d",&n);
    for(i=0;i<n;i++){
        score = 25;
        do{
            scanf("%d",&b);
            score += b/30;
        }while(b!=0);
        if(score<30)
            printf("0");
        if(score>=200){
            num = score/200;
            score %= 200;
            printf("luggage %d ",num);
        }
        if(score>=100){
            num = score/100;
            score %= 100;
            printf("suitcase %d ",num);
        }
        if(score>=70){
            num = score/70;
            score %= 70;
            printf("thermos flask %d ",num);
        }
        if(score>=45){
            num = score/45;
            score %= 45;
            printf("gap %d ",num);
        }
        if(score>=35){
            num = score/35;
            score %= 35;
            printf("bag %d ",num);
        }
        if(score>=30){
            num = score/30;
            score %= 30;
            printf("glass %d ",num);
        }
        printf("\n");
    }
    return 0;
}
