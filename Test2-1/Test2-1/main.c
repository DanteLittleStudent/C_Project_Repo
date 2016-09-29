#include <stdio.h>
#include "increment.h"
#include "negate.h"

int main(void){
	int num_1 = 10;
	int num_2 = -18;
	num_1 = increment(num_1);
	num_2 = negate(num_2);
	printf("%d\n%d", num_1, num_2);
	return 0;
}