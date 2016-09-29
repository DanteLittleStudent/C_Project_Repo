#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1

int identity_matrix(int (*matrix)[3], int size);

int main(void){
	int matrix[3][3] = {{1, 1, 0}, {0, 1, 0}, {0, 0, 1}};
	int (*ptmat)[3] = matrix;
	printf("%d\n", identity_matrix(ptmat, 3));
}

int identity_matrix(int (*matrix)[3], int size){
	int i;
	for(i=0; i<size; i++){
		if((*(matrix + i))[i] != 1){
			(*(matrix + i))[i];
			return FALSE;
		}
	}
	return TRUE;
}