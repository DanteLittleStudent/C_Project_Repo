#include <stdio.h>

char* del_substr(char *const str, char *const substr);
int match_str(char *const str, char *const substr);

int main(void){
	char str[] = "abcdef";
	char substr[] = "ef";
	printf("%s\n", del_substr(str, substr));
	return 0;
}

int match_str(char *const str, char *const substr){
	char *match_str = str;
	char *match_sub = substr;
	while(*match_str != 0){
		if(*match_str == *match_sub){
			match_str++;
			match_sub++;
			if(*match_str != *match_sub){
				return 0;
			}
		}
		match_str ++;
	}
	return 1;
}

char* del_substr(char *const str, char *const substr){
	char *ptstr = str;
	char *ptsub = substr;
	char *temp = str;
	int i = 0;
	if(*ptstr == NULL || *ptsub == NULL){
		return NULL;
	}
	if(!match_str(str, substr)){
		return NULL;
	}
	while(*ptstr != '\0'){
		if(*ptstr == *ptsub){
			*ptstr++;
			*ptsub++;
		}else{
			*(temp + i) = *ptstr++;
			
			i++;
		}
	}
	*(temp + i) = '\0';
	return temp;
}

