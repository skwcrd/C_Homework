#include<stdio.h>
main()
{
	int year;
	double light;
	double c = 299792458;
	
	printf("Enter year : ");
	scanf("%d",&year);
	
	light = (c*year*(365*24*60*60))/1604.344;
	
	printf("Light can travel %.2f miles in %d year",light,year);
	return 0;
}

/*

#include<stdio.h>
#define day 365
#define hour 24
#define minute 60
#define second 60
#define c 299792458
#define miles 1604.344

main()
{
	int year;
	double light_mi,light_m,sum;
	
	printf("Enter year : ");
	scanf("%d",&year);
	
	sum = year*(day*hour*minute*second);
	light_m = (double)c*sum;
	light_mi = light_m/miles;
	
	printf("Light can travel %.2f miles in %d year",light_mi,year);
	return 0;
}

*/

