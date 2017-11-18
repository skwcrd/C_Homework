#include<stdio.h>
#include"SK.c"
int main(void)
{
    long long num,n,count=0;
    scanf("%lld",&n);
    for(num=2;count<n;num++){
        if(prime(num)==1){
            count++;
            printf("%lld\t",num);
        }
    }
    return 0;
}
