#include <stdio.h>

int main(){
	int c;
	c = getchar();
	if(c < 0 || c == 10){
		printf("����Ϊ��\n");
		return 0;
	}
	while(c != EOF){
		putchar(c);
		c = getchar();
	}
	return 0;
}
