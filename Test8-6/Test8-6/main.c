#include <stdio.h>
#define TRUE 1
#define FALSE 0


void eight_queen(int max_row, int row);
int check(int row, int column, int max_row);
void output(int max_row);

int queen[8][8] = {0};
int num = 1;

int main(void){
	eight_queen(8,1);
	return 0;

}

void eight_queen(int max_row,int row){
	int i;
	for(i=0; i<max_row; i++){
		queen[row -1][i] = 1;
		if(check(row, i + 1, max_row) == TRUE){
			if(row == max_row){
				output(max_row);
			}else{
				eight_queen(max_row, row + 1);
			}
		}
		queen[row - 1][i] = 0;
	}
}

int check(int row, int column, int max_row){
	int i;
	int j;
	if(row == 1){
		return TRUE;
	}
	for(i=0; i<=row-2; i++){
		if(queen[i][column - 1] == 1){
			return FALSE;
		}
	}
	i = row - 2;
	j = i + column - row;
	while(i>=0 && j>=0){
		if(queen[i][j] == 1){
			return FALSE ;
		}
		i--;
		j--;
	}
	i = row - 2;
	j = column;
	while(i>=0 && j<=max_row - 1){
		if(queen[i][j] == 1){
			return FALSE;
		}
		i--;
		j++;
	}
	return TRUE;
}

void output(int max_row){
	int i;
	int j;
	printf("第%d种解法:\n", num);
	for(i=0; i<max_row; i++){
		for(j=0; j<max_row; j++){
			printf("%d ",queen[i][j]);
		}
		printf("\n");	
	}
	num ++;
}