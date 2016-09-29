#include <stdio.h>
#include <stdlib.h>

int main(void){
	int ch;
	int num = 0;
	while((ch = getchar()) != EOF){
		if(ch == '{'){
			num ++;
		}
		if(ch == '}'){
			if(num == 0){
				printf("����ȱ��'{'");
				exit(EXIT_FAILURE);
			}else{
				num --;
			}
		}
	}
	if(num > 0){
		printf("����ȱ��'}'");
		exit(EXIT_FAILURE);
	}
	printf("ƥ��ɹ�");
	return EXIT_SUCCESS;
}
