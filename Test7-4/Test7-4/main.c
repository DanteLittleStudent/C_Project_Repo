#include <stdio.h>
#include <stdarg.h>

int max_list(int msg, ...);

int main(void){
	printf("%d\n",max_list(1,10,7,9,-1));
}

int max_list(int msg, ...){
	va_list argp;
	int argno = 0;
	int max = 0;
	int number = 0;
	va_start(argp, msg);
	max = msg;
	while(1){
		number = va_arg(argp, int);
		if(number == -1){
			va_end(argp);
			return max;
		}
		if(number>max){
			max = number;
		}
	}
}
