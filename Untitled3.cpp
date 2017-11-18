#include<stdio.h>
int main(void)
{
    int i,num = 0;
    int score[97],passed = 0,failed = 0;
    float arithmetic_mean = 0;
    scanf("%d",&score[num]);
    while(score[num]>=0){
        arithmetic_mean += score[num];
        num = num+1;
        scanf("%d",&score[num]);
    }
    arithmetic_mean = arithmetic_mean/num;
    for(i=0;i<num;i++){
        if(score[i]>=arithmetic_mean)
            passed = passed+1;
        else
            failed = failed+1;
    }
    printf("num student = %d, mean = %.2f, pass = %d, fail = %d",num,arithmetic_mean,passed,failed);
	return 0;
}
