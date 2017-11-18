#include<stdio.h>

long long fibo(long long);

int main()
{
	long long n;
	printf("Enter a number fibonacci : ");
	scanf("%lld",&n);
	printf("\nA number %lld fibonacci is %lld\n",n,fibo(n));
	return 0;
}

long long fibo(long long num)
{
	if(num==0)
		return 0;
	else if(num==1)
		return 1;
	else
		return fibo(num-1)+fibo(num-2);
}

