#include <stdio.h>
#include <string.h>
#define TRUE 0
#define FALES 1

int palindrome(char *string);

int main(void){
	char string[] = "a   19898354 li   la";
	printf("%d", palindrome(string));
	return 0;
}

int palindrome(char *string){
	char *ptstr = string;
	char *reserve_pts = string;
	while(*reserve_pts != '\0'){
		reserve_pts ++;
	}
	while(*ptstr != '\0'){
		if(*ptstr >= 'a' && *ptstr <= 'z' || *ptstr >= 'A' && *ptstr <= 'Z'){
			if(*reserve_pts >= 'a' && *reserve_pts <= 'z' || *reserve_pts >= 'A' && *reserve_pts <= 'Z'){
				if(*ptstr == *reserve_pts){
					ptstr ++;
					reserve_pts --;
				}else{
					return FALES;
				}
			}else{
				reserve_pts --;
			}
		}else{
			ptstr ++;
		}
	}
	return TRUE;
}