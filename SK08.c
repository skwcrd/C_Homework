#include<stdio.h>
int main(void)
{
    int i,j,n,num,num_pro;
    scanf("%d",&num);
    for(n=0;n<num;n++){
        scanf("%d",&num_pro);
        int sum = 0,product[num_pro][2];
        for(i=0;i<2;i++){
            for(j=0;j<num_pro;j++)
                scanf("%d",&product[j][i]);
        }
        for(i=0;i<num_pro;i++)
            sum += product[i][0]*product[i][1];
        printf("%d\n",sum);
    }
    return 0;
}
