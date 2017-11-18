#include<stdio.h>

typedef struct position{
	int row,col;
}position;

bool used_in_row[9][10];
bool used_in_col[9][10];
bool used_in_block[3][3][10];

void init_used();
void read_input(char file_name[100],int sudoku[9][9]);
void solve_sudoku(int sudoku[9][9],position pos);

int main(int argc,char *argv[])
{
	int sudoku[9][9];
	position first_pos;

	init_used();
	read_input(argv[1],sudoku);

	first_pos = (position){0,0};

	solve_sudoku(sudoku,first_pos);

	return 0;
}

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

void read_input(char file_name[100],int sudoku[9][9])
{
	int i,j,n;
	int sudoku[9][9];

	FILE *file;
	file = fopen(file_name,"r");
	fscanf(file,"%d",&n);

	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			fscanf(file,"%d",&sudoku[i][j]);
		}
	}
	fclose(file);
	print_sudoku(sudoku);
}

void print_sudoku(int sudoku[9][9])
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
			if(sudoku[i][j] != 0){
				printf("%d",sudoku[i][j]);
			}
			if(j == 8){
				printf("|");
			}
		}
		printf("\n");
		if(i == 8){
			printf("+---+---+---+\n");
		}
	}
}

bool can_fill(int sudoku[9][9],position pos,int number)
{
	bool not_used,blank;

	blank = (sudoku[pos.row][pos.col] == 0);
	not_used = !used_in_row[pos.row][number] && !used_in_col[pos.col][number] && !used_in_block[pos.row/3][pos.col/3][number];

	if(blank && not_used){
		return true;
	}
	else{
		return false;
	}
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

void solve_sudoku(int sudoku[9][9],position pos)
{
	position next_blank = find_next_blank(sudoku,pos);

	if(next_blank.row == -1 && next_blank.col == -1){
		print_sudoku(sudoku);
	}
	else{
		int i;

		for(i=1;i<10;i++){
			if(can_fill(sudoku,next_blank,i)){
				sudoku[next_blank.row][next_blank.col] = i;
				set_used(i,next_blank,true);
				solve_sudoku(sudoku,next_blank);
				sudoku[next_blank.row][next_blank.col] = 0;
				set_used(i,next_blank,false);
			}
		}
	}
}
