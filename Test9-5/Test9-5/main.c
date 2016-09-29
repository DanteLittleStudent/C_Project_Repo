#include <stdio.h>
#include <string.h>

char *my_strncat(char *dest, char *src, int dest_len);

int main(void){
	char dest[10] = "abcdefghi";
	char src[3] = "12";
	printf("%s", my_strncat(dest, src, 10));
	return 0;
}

char *my_strncat(char *dest, char *src, int dest_len){
	int i;
	int dest_real_len = strlen(dest);
	int src_real_len = strlen(src);
	if(dest_real_len + src_real_len > dest_len - 1){
		return dest;
	}
	for(i=dest_real_len - 1; i<dest_len; i++){
		dest[i] = src[i - dest_real_len + 1];
	}
	dest[i - dest_real_len] = '\0';
	return dest;
}