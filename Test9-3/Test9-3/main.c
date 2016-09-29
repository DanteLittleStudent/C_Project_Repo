#include <stdio.h>
#include <string.h>

char *my_strcpy(char *dest, char *src, int src_len);

int main(void){
	char dest[] = "abcd";
	char src[] = "12356";
	printf("%s", my_strcpy(dest, src, 5));
}

char *my_strcpy(char *dest, char *src, int src_len){
	int length;
	int i;
	int dest_len = strlen(dest);
	length = (dest_len - 1) > src_len ? src_len : dest_len;
	for(i=0; i<length; i++){
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;
}