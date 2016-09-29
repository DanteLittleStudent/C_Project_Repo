#include <stdio.h>

int hermite(int n, int x);
int main(void){
	printf("Hermite:%d\n", hermite(3, 2));
}

int hermite(int n, int x){
	if(n <= 0){
		return 1;
	}
	if(n == 1){
		return 2*x;
	}
	if(n >= 2){
		return 2*hermite(n - 1, x)*x - hermite(n - 2, x)*(n-1)*2;
	}
}