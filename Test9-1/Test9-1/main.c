#include <stdio.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

int check(char ch);
void print_result();
int count_alpha = 0;
int count_digit = 0;
int count_ctrl = 0;
int count_lower = 0;
int count_uper = 0;
int count_punct = 0;
int count_space = 0;
int count_unprint = 0;

int main(void){
	char ch;
	while((ch = getchar()) != EOF){
		check(ch);
	}
	print_result();
	return 0;
}

int check(char ch){
	if(isalpha(ch)){
		if(islower(ch)){
			count_lower ++;
		}else{
			count_uper ++;
		}
	}else if(iscntrl(ch)){
		count_ctrl ++;
	}else if(isdigit(ch)){
		count_digit ++;
	}else if(ispunct(ch)){
		count_punct ++;
	}else if(isspace(ch)){
		count_space ++;
	}else{
	}
	if(!isprint(ch)){
		count_unprint ++;
	}
}

void print_result(){
	printf("Сд��ĸ����:%d\n ��д��ĸ����:%d\n �����ַ�����:%d\n ���ָ���:%d\n �����Ÿ���:%d\n �ո����%d\n ���ɴ�ӡ�ַ�����:%d\n", 
		count_lower, count_uper, count_ctrl, count_digit, count_punct, count_space, count_unprint);
}