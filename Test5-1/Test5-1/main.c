#include <stdio.h>
#include <stdlib.h>

int main(void){
	int ch;
	printf("��������Ϣ:");
	while((ch = getchar()) != EOF){
		if(ch >= 'A' && ch <= 'Z'){
			ch = ch - ('A' - 'a');
		}
		printf("%c", ch);
	}
	EXIT_SUCCESS;
}