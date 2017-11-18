#include<stdio.h>
#include<math.h>

double square_root(double);

int main()
{
    double /*sqrt,*/n;
	printf("Enter a number : ");
	scanf("%lf",&n);
    //sqrt = square_root(n);
	printf("\nSquare root of %.2lf is %.3lf\n",n,square_root(n));
	return 0;
}

double square_root(double num)
{
    double upper,lower,sum;
    lower = 0;
	upper = num;
	sum = (lower+upper)/2.0;
	while(fabs(sum*sum-num)>0.000001){
		if((sum*sum)>num)
			upper = sum;
		else
			lower = sum;
		sum = (lower+upper)/2.0;
	}
    return sum;
}
