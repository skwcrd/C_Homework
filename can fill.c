#include<stdio.h>
#include<stdlib.h>

typedef struct position{
	int row,col;
}position;

bool used_in_row[9][10];
bool used_in_col[9][10];
bool used_in_block[3][3][10];

void set_used(int number,position pos,bool use);

void set_used(int number,position pos,bool use)
{
	used_in_row[pos.row][number] = use;
	used_in_col[pos.col][number] = use;
	used_in_block[pos.row/3][pos.col/3][number] = use;
}

void init_used()
{
	int i,j,k;
	
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			for(k=0;k<10;k++){
				position cur_pos = (position){i,j};
				set_used(k,cur_pos,false);
			}
		}
	}
}

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
		(*test)[i] = (int*)malloc(sizeof(int)*3);
	}
	
	for(i=0;i<n;i++){
		fscanf(file,"%d%d%d",&((*test)[i][0]),&((*test)[i][1]),&((*test)[i][2]));
	}
	
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			fscanf(file,"%d",&sudoku[i][j]);
			position cur_pos = (position){i,j};
			set_used(sudoku[i][j],cur_pos,true);
		}
	}
	fclose(file);
}

bool can_fill(int sudoku[9][9],position pos,int number)
{
	bool not_used,blank;
	
	blank = (sudoku[pos.row][pos.col] == 0);
	not_used = !used_in_row[pos.row][number] && !used_in_col[pos.col][number] && !used_in_block[pos.row/3][pos.col/3][number];
	
	if(blank && not_used){
		return true;
	}
	return false;
}

int main(int argc,char *argv[])
{
	int i,count,**test_case,sudoku[9][9];
	
	init_used();
	read_input(argv[1],sudoku,&count,&test_case);
	
	for(i=0;i<count;i++){
		int number;
		position pos;
		
		pos.row = test_case[i][0];
		pos.col = test_case[i][1];
		number = test_case[i][2];
		
		printf("%d\n",can_fill(sudoku,pos,number));
	}
	return 0;
}

