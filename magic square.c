#include<stdio.h>

int used[10];
int count = 0;

int is_magic(int square[3][3])
{
	int i,expected,sum;
	
	expected = square[0][0] + square[0][1] + square[0][2];
	
	for(i=0;i<3;i++){
		sum = square[i][0] + square[i][1] + square[i][2];
		if(expected != sum){
			return 0;
		}
	}
	
	for(i=0;i<3;i++){
		sum = square[0][i] + square[1][i] + square[2][i];
		if(expected != sum){
			return 0;
		}
	}
	
	sum = square[0][0] + square[1][1] + square[2][2];
	if(expected != sum){
		return 0;
	}
	
	sum = square[0][2] + square[1][1] + square[2][0];
	if(expected != sum){
		return 0;
	}
	
	return 1;
}

void fill_square(int fill_count,int square[3][3])
{
	if(fill_count == 9){
		if(is_magic(square)){
			count++;
		}
	}
	else{
		int i;
		for(i=1;i<10;i++){
			if(!used[i]){
				used[i] = 1;
				square[fill_count/3][fill_count%3] = i;
				
				fill_square(fill_count+1,square);
				
				used[i] = 0;
			}
		}
	}
}

int main()
{
	int i,square[3][3];
	
	for(i=0;i<10;i++){
		used[i] = 0;
	}
	
	fill_square(0,square);
	
	printf("%d",count);
	
	return 0;
}

