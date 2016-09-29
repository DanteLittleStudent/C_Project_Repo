#include <stdio.h>

#define MAX_TEMPERATURE 300
#define MIN_TEMPERATURE 0
#define STEP_TEMPERATURE 20

int main(){
	float fahr = MIN_TEMPERATURE;
	float celsius;
	printf("fahr\tcelsius\n");
	while(fahr <= MAX_TEMPERATURE){
		celsius = 5 * (fahr - 32) / 9;
		printf("%3.0fC\t%4.1fF\n", fahr, celsius);
		fahr += STEP_TEMPERATURE;
	}
}

