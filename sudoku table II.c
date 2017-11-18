#include<stdio.h>
int main()
{
	int sudoku[9][9],i,j;
	FILE *sk;
	sk = fopen("input_sdk.txt","r");
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			fscanf(sk,"%d",&sudoku[i][j]);
		}
	}
	fclose(sk);

	for(i=0;i<9;i++){
		if(i%3 == 0)
			printf("+---+---+---+\n");
		for(j=0;j<9;j++){
			if(j%3 == 0)
				printf("|");
			if(sudoku[i][j] != 0)
				printf("%d",sudoku[i][j]);
			else
				printf("#");
			if(j == 8)
				printf("|");
		}
		printf("\n");
		if(i == 8)
			printf("+---+---+---+\n");
	}
	return 0;
}

