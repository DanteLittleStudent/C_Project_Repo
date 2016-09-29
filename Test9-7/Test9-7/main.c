#include <stdio.h>
#include <string.h>

char *my_strrchr(char const *str, int ch);

int main(void){
	char const str[] = "Hello World";
	int ch = 'a';
	printf("%s", my_strrchr(str, ch));
	return 0;
}

char *my_strrchr(char const *str, int ch){
	int i;
	int str_len = 0;
	while(*str != '\0'){
		str ++;
		str_len ++;
	}
	for(i=0; i<str_len; i++){
		str --;
		if(*str == ch){
			return (char *)str;
		}
	}
	return NULL;
}
