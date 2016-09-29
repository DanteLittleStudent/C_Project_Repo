#include <stdio.h>

int main(void){
	int i;
	int flag;
	for(i=1; i<101; i++){
		int j;
		flag = 0;
		if (i == 1){
			flag ++;
		}
		if(i == 2){
			printf("ÖÊÊýÊÇ: %d ", i);
		}
		if(i == 2){
			flag ++;
		}
		for(j=2; j<i; j++){
			if(i % j == 0){
				flag ++;
				break;
			}
		}
		if(flag == 0){
			printf("%d ", i);
		}
	}
	return 0;
}