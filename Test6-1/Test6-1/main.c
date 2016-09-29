#include <stdio.h>

char *find_char(char *const source, char *const chars);

int main(void){
	char source[] = "aceg";
	char chars[] = "p";
	printf("÷∏’Îµÿ÷∑:%d\n", find_char(source, chars));
}

char *find_char(char *const source, char *const chars){
	char *answer;
	char *pts = source;
	char *ptc = chars;
	if(*ptc == NULL || *pts == NULL){
		return NULL;
	}
	while(*pts != 0){
		while(*ptc != 0){
			if(*pts == *ptc){
				answer = pts;
				return answer;
			}
			ptc++;
		}
		pts++;
	}
	return NULL;
}