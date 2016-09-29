#include <stdio.h>

int main(){
	int c;
	c = getchar();
	if(c < 0 || c == 10){
		printf("Êý¾ÝÎª¿Õ\n");
		return 0;
	}
	while(c != EOF){
		putchar(c);
		c = getchar();
	}
	return 0;
}
