#include <stdio.h>

#define STATEMENT "splunk��˾�����⣺˵һ����Ӿ�����кܶഢ���ÿ���������һ��ID�ţ������ϰ岻ϲ��4������֣�����ID���ﶼ������4��ID�Ŵ�1��ʼ��ţ�����������д�����ID�ţ��ó��������\n�������� 4   ��� 5;  ���� 5   ��� 6;  ���� 14   ��� 16\nĿǰ֧����λ������4���ɼ�����չ"

void boss_id(int num);

int main(void){
	printf("%s", STATEMENT);
	boss_id(100);
	return 0;
}

void boss_id(int num){
	int print_id = 0;
	int i;
	int flag = 0;
	for(i=1; i<num+1; i++){
		if(i == 4 || (i + flag) % 10 == 4){
			flag = i / 10 + 1;
			print_id = i + flag;
			printf("\n��Ȼ�� : %d\t", i);
			printf("�����ID ��%d\n", print_id);
		}else{
			print_id = i + flag;
			printf("\n��Ȼ�� : %d\t", i);
			printf("�����ID ��%d\n", print_id);
		}
	}
}

