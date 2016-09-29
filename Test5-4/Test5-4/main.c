#include <stdio.h>

int store_bit_field(int original_value, int value_to_store, unsigned int starting_bit, unsigned int ending_bit);

int main(void){
	int original_value = 0xffff;
	int value_to_store = 0x123;
	unsigned int starting_bit = 13;
	unsigned int ending_bit = 9;
	printf("%x", store_bit_field(original_value, value_to_store, starting_bit, ending_bit));
}

int store_bit_field(int original_value, int value_to_store, unsigned int starting_bit, unsigned int ending_bit){
	int mask = 0;
	int i;
	int answer;
	int dis_mask;
	for(i=0; i<starting_bit - ending_bit; i++){
		mask = mask | 1;
		mask <<= 1;
	}
	for(i=0; i<ending_bit; i++){
		mask <<= 1;
	}
	dis_mask = ~mask;
	answer = original_value & dis_mask;
	for(i=0; i<ending_bit; i++){
		answer <<= 1;
	}
	answer = answer & mask;
	answer = answer | original_value;
	return answer;
}