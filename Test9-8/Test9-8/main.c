#include <stdio.h>
#include <string.h>

char *my_strnchr(char const *str, int ch, int which);

int main(void){
	char const *str = "Hello World";
	printf("%s", my_strnchr(str, 'l', 2));
	return 0;
}

char *my_strnchr(char const *str, int ch, int which){
	int i = 0;
	while(*str != '\0'){
		if(*str == ch){
			i++;
			if(i == which){
				return (char *)str;
			}
		}
		str ++;
	}
	return NULL;
}