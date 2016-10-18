#include <stdio.h>

#define STATEMENT "splunk公司面试题：说一个游泳馆里有很多储物柜，每个储物柜都有一个ID号，但是老板不喜欢4这个数字，所以ID号里都不能有4，ID号从1开始编号，让你设计所有储物柜的ID号，用程序输出，\n比如输入 4   输出 5;  输入 5   输出 6;  输入 14   输出 16\n目前支持万位以内无4，可继续扩展"

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
			printf("\n自然数 : %d\t", i);
			printf("处理后ID ：%d\n", print_id);
		}else{
			print_id = i + flag;
			printf("\n自然数 : %d\t", i);
			printf("处理后ID ：%d\n", print_id);
		}
	}
}

