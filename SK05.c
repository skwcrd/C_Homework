#include<stdio.h>

int main(void)
{
    long long n,m,sum;
    scanf("%lld %lld",&n,&m);
    while(m>0){
        if(n==1||n==0)
            sum = (1+m)*m/2;
        else{
            n = (1+(n-1))*(n-1)/2;
            sum = ((1+m)*m/2)-n;
        }
        printf("%lld\n",sum);
        scanf("%lld %lld",&n,&m);
    }
	return 0;
}
