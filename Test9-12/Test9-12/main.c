#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* prepare_key(char *key);
char* toupper_str(char *str);
void unduplicate_str(char *str);

int main(void){
	char *key = "addc";
	printf("result is %s", prepare_key(key));
	return 0;
}

char* prepare_key(char *key){
	char buffer[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	key = toupper_str(key);
	unduplicate_str(key);
	while(*key != '\0'){
		if(i<27 && (*key<='Z' && *key>='A')){
			buffer[i] = *key;
			key ++;
		}
	}
	return buffer;
}


char* toupper_str(char *str){
	char ch;
	int length = strlen(str);
	char pts[27];
	int i;
	for(i=0; i<length; i++){
		ch = toupper(str[i]);
		pts[i] = ch;
	}
	pts[i] = '\0';
	return pts;
}

void unduplicate_str(char *str){
	int i = 0;
	int j;
	int length = strlen(str);
	char ch = str[i];
	while(ch != '\0'){
		j = i + 1;
		if(str[j] == ch){
			for(j=i; j<length; j++){
				str[j] = str[j + 1];
			}
			length--;
		}else{
			ch = str[j];
			i++;
		}
	}
}
