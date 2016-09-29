#include <stdio.h>
#include <string.h>

int count_chars(char const *str, char const *chars);

int main(void){
	char const str[] = "Hello World";
	char const chars [] = "abcdefghijklmnopqrstuvwxyz";
	printf("%d", count_chars(str, chars));
	return 0;
}

int count_chars(char const *str, char const *chars){
	char *pts = (char *)str;
	char *ptc = (char *)chars;
	int count = 0;
	while(*pts != '\0'){
		while(*ptc != '\0'){
			if(*pts == *ptc){
				count ++;
			}
			ptc ++;
		}
		ptc = (char *)chars;
		pts++;
	}
	return count;
}
