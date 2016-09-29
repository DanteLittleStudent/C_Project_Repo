#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1

int identity_matrix(int *matrix, int size);

int main(void){
	int matrix[9] = {1, 1, 0, 0, 1, 0, 0, 0, 1};
	printf("%d\n", identity_matrix(matrix, 3));
}

int identity_matrix(int *matrix, int size){
	int i = 0;
	int num = 0;
	while(i<size){
		if(*(matrix + num) != 1){
			return FALSE;
		}else{
			i++;
			num << 1;
		}
	}

	return TRUE;
}