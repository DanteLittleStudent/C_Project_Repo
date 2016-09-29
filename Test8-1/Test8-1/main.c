#include <stdio.h>
#define DEFAULT_MAX 100000000000

float single_tax(float income);

int main(void){
	float income = 11111118172432475;
	printf("%.2f", single_tax(income));
}

float single_tax(float income){
	float tax;
	int num;
	static float income_less[] = {23350, 56550, 117950, 256500,DEFAULT_MAX};
	static float base_tax[] = {0, 3502.50, 12798.50, 31832.50, 81710.50};
	static float change_tax[] = {0.15, 0.28, 0.31, 0.36, 0.396};
	if(income>DEFAULT_MAX){
		return -1;
	}
	for(num = 0; income>income_less[num]; num++);
	num--;
	tax = base_tax[num] + (income - income_less[num]) * change_tax[num];
	return tax;
}