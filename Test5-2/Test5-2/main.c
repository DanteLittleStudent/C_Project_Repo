#include <stdio.h>

int main(void){
	int ch;
	printf("����������:");
	while((ch = getchar()) != EOF){
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
			ch = ch + 13;
		}
		printf("%c", ch);
	}
}