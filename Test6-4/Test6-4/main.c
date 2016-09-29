#include <stdio.h>
#define N 10000

int* prime_number(int first_number, int last_number);

int main(void){
	int a = 101;
	int b = 111;
    int * c = prime_number(a, b);
}

int* prime_number(int first_number, int last_number){
	int array[N];
	int i;
	int* point = array;
	point = point + first_number;
	for(i = first_number-1; i<last_number; i++){
		array[i] = 1;
	}
	i = first_number - 1;
	while(i<last_number){

	}
	
}