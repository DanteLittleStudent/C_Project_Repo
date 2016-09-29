#include <stdio.h>

unsigned int reserve_bits(unsigned value);

int main(void){
	unsigned int value = 25;
	unsigned int answer = reserve_bits(value);
	printf("%u", answer);
	return 0;
}

unsigned int reserve_bits(unsigned value){
	unsigned int answer = 0;
	unsigned int i;
	for(i=1; i!=0; i<<=1){
		answer = answer << 1;
		if(value & 1){
			answer = answer | 1;
		}
		value >>= 1;
	}

	return answer;
}