#include <stdio.h>

int main(void){
	char ch[8];
	float a;
	float b;
	float c;
	printf("请输入三角形三边的值: ");
	scanf("%f %f %f",&a ,&b ,&c);
	printf("%.2f %.2f %.2f" ,a ,b ,c);
		if(a == b == c) {
			printf("是等边三角形\n");
			return 0;
		}else if(a == b || a == c || b == c){
			if(a + b > c && a + c > b && b + c > a ){
				printf("是等腰三角形\n");
				return 0;
			}else{
				printf("三边不能构成三角形\n");
				return 0;
			}
		}else{
			if(a + b > c && a + c > b && b + c > a ){
				printf("是普通三角形\n");
				return 0;
			}else{
				printf("三边不能构成三角形\n");
				return 0;
			}
		}
	
}