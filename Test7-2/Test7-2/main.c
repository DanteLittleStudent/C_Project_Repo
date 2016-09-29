#include <stdio.h>

int gcd(int M, int N);

int main(void){
	printf("%d\n", gcd(3,9));

}

int gcd(int M, int N){
	if(M <= 0 || N <= 0){
		return 0;
	}
	if( M < N){
		M = M ^ N;
		N = N ^ M;
		M = N ^ M;
	}
	if(M == N){
		return M;
	}
	if(M % N == 0){
		return N;
	}else{
		return gcd(M % N, N);
	}
}