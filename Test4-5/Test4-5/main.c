#include <stdio.h>

int substr(char dsr[], char src[], int star, int len);

int main(void){
	char src[] = "abcdefg";
	int star = 2;
	int len = 2;
	char dsr[] = "";
	substr(dsr, src, star, len);
	printf("%s\n", dsr);
}

int substr(char dsr[], char src[], int star, int len){
	int i;
	if(star > sizeof(src) || star < 0 || len < 0){
		dsr = "";
		return 0;
	}

	for(i=0; i<len; i++){
		if(star + i > sizeof(src)){
			break;
		}
		dsr[i] = src[star + i];
	}
	return 0;
}