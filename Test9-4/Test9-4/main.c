#include <stdio.h>
#include <string.h>

char *my_strcat(char *dest, char *src, int n);

int main(void){
	char dest[] = "123456789";
	char src[] = "abcde";
	printf("%s", my_strcat(dest, src, 2));
}

char *my_strcat(char *dest, char *src, int n){
	int dest_len = strlen(dest);
	int src_len = strlen(src); 
	int length;
	int i;
	int j = 0;
	length = (dest_len - 1) > (src_len + n) ? (src_len + n) : (dest_len - 1);
	for(i=n - 1; i<length; i++){
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return dest;
}