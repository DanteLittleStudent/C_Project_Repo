#include <stdio.h>
#include <string.h>

char *my_strcpy_end(char *dest, char *src);

int main(void){
	char dest[] = "abcd";
	char src[] = "12456";
	char *result = my_strcpy_end(dest, src);
	printf("%c", *(result - 1));
	return 0;
}

char *my_strcpy_end(char *dest, char *src){
	while(*src != '\0' && *dest != '\0'){
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return dest;
}