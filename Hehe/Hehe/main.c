#include <stdio.h>

int main(void){
	int a = 2;
	int* b = &a;
	printf("a = %d; ��ַΪ: %d", *b+1, b);
	return 0;
}