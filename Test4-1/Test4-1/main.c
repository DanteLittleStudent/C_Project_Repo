#include <stdio.h>

int main(void){
	int n = 4;
	float a_1 = 1;
	float a_2 = 0;
	do{
		a_2 = a_1;
		a_1 = (a_1 + n / a_1) /2;
		printf("a_1 = %3f\n", a_1);
	} while (a_2 != a_1);
	printf("result = %3f\n", a_1);
	return 0;
}

