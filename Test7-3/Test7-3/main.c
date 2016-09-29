#include <stdio.h>

int ascii_to_integer(char* string);

int main(void){
	char string[] = "1234";
	printf("%d\n", ascii_to_integer(string));
}

int ascii_to_integer(char* string){
	int integer = 0;
	char* pts = string;
	while(*pts != '\0'){
		integer = integer * 10;
		if(*pts<'9' && *pts>'0'){
			int c = *pts - '0';
			integer = integer + (*pts - '0');
		}else{
			return 0;
		}
		pts++;
	}
	return integer;
}