#include<stdio.h>
#include<stdlib.h>

typedef struct position{
	int row,col;
}position;

void read_input(char file_name[100],int sudoku[9][9],int *count,int ***test);

void read_input(char file_name[100],int sudoku[9][9],int *count,int ***test)
{
	int i,j,n;
	
	FILE *file;
	file = fopen(file_name,"r");
	fscanf(file,"%d",&n);
	*count = n;
	*test = (int**)malloc(sizeof(int*)*n);
	
	for(i=0;i<n;i++){
		(*test)[i] = (int*)malloc(sizeof(int)*2);
	}
	
	for(i=0;i<n;i++){
		fscanf(file,"%d%d",&((*test)[i][0]),&((*test)[i][1]));
	}
	
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			fscanf(file,"%d",&sudoku[i][j]);
		}
	}
	fclose(file);
}

position find_next_blank(int sudoku[9][9],position pos)
{
	position next_pos;
	int i,start,end;
	
	next_pos = (position){-1,-1};
	start = (pos.row*9) + pos.col;
	end = 81;
	
	for(i=start;i<end;i++){
		if(sudoku[i/9][i%9] == 0){
			next_pos.row = i/9;
			next_pos.col = i%9;
			return next_pos;
		}
	}
	
	return next_pos;
}

int main(int argc,char *argv[])
{
	int i,count,**test_case,sudoku[9][9];
	
	read_input(argv[1],sudoku,&count,&test_case);
	
	for(i=0;i<count;i++){
		position cur_blank,next_blank;
		
		cur_blank.row = test_case[i][0];
		cur_blank.col = test_case[i][1];
		next_blank = find_next_blank(sudoku,cur_blank);
		
		printf("%d %d\n",next_blank.row,next_blank.col);
	}
	return 0;
}

