#include <stdio.h>

int main(void){
	char ch[8];
	float a;
	float b;
	float c;
	printf("���������������ߵ�ֵ: ");
	scanf("%f %f %f",&a ,&b ,&c);
	printf("%.2f %.2f %.2f" ,a ,b ,c);
		if(a == b == c) {
			printf("�ǵȱ�������\n");
			return 0;
		}else if(a == b || a == c || b == c){
			if(a + b > c && a + c > b && b + c > a ){
				printf("�ǵ���������\n");
				return 0;
			}else{
				printf("���߲��ܹ���������\n");
				return 0;
			}
		}else{
			if(a + b > c && a + c > b && b + c > a ){
				printf("����ͨ������\n");
				return 0;
			}else{
				printf("���߲��ܹ���������\n");
				return 0;
			}
		}
	
}