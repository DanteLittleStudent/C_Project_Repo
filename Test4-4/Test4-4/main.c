#include <stdio.h>


void copy_t(char dsr[], char src[], int n);

int main(void){
	char src[] = {'a', 'b', 'c', 'd', 'e'};
	int n = 3;
	char dsr[] = "";
	copy_t(dsr, src, n);
	printf("%s", dsr);
}

void copy_t(char dsr[], char src[], int n){
	int i;
	for(i=0; i<n; i++){
		if(src[i] != NULL){
			dsr[i] = src[i];
		}else{
			dsr[i] = NULL;
		}
	}
}

