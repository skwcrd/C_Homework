#include<stdio.h>

int factorial(int);

int main()
{
	int n;
	printf("Enter a number factorial : ");
	scanf("%d",&n);
	printf("\nA number %d factorial is %d\n",n,factorial(n));
	return 0;
}

int factorial(int num)
{
	if(num==0)
		return 1;
	else
		return num*factorial(num-1);
}

