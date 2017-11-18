#include<stdio.h>
main()
{
	int i,j;
	
	for(i=0;i<9;i++){
		if(i % 3 == 0){
			printf("+---+---+---+\n");
		}
		for(j=0;j<9;j++){
			if(j % 3 == 0){
				printf("|");
			}
			printf("#");
			if(j == 8){
				printf("|");
			}
		}
		printf("\n");
		if(i == 8){
			printf("+---+---+---+\n");
		}
	}
	return 0;
}

/*

#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g,h;
	
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("+");
			for(c=0;c<3;c++){
				printf("-");
			}
		}
		printf("+");
		printf("\n");
		for(d=0;d<3;d++){
			for(e=0;e<3;e++){
				printf("|");
				for(f=0;f<3;f++){
					printf("#");
				}
			}
			printf("|");
			printf("\n");
		}
	}
	for(g=0;g<3;g++){
		printf("+");
		for(h=0;h<3;h++){
			printf("-");
		}
	}
	printf("+");
	printf("\n");
	return 0;
}

*/

