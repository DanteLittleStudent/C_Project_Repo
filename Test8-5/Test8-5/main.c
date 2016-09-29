#include <stdio.h>

void matrix_mutiply(int *p, int *q, int *r, int x, int y, int z);

int main(void){
	int p[4] = {1,2,3,4};
	int q[4] = {1,2,3,4};
	int r[4] = {0};
	matrix_mutiply(p, q, r, 2, 2, 2);
}

void matrix_mutiply(int *p, int *q, int *r, int x, int y, int z){
	int *ptp = p;
	int *ptq = q;
	int k;
	int row;
	int column;
	int a;
	int b;
	for(row=0; row<x; row++){
		for(column=0; column<z; column++){
			*ptp = *(ptp + row * y);
			*ptq = *(ptq + column);
			a = *ptp;
			b = *ptq;
			for(k=0; k<y; k++){
				*r += *ptp * (*ptq);
				ptp++;
				ptq += z;
			}
			r++;
		}
	}
}

