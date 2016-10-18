#include <stdio.h>
#include <string.h>

int count_the(char *string);

char const white_space [] = " \n\r\f\t\v";

int main(void){
	char *string = "adakldjrntwlkj the alkdjlsakjalsj the tjljraklrja";
	printf("count is %d", count_the(string));
	return 0;
}

int count_the(char *string){
	char buffer [101];
	int count = 0;
	int i = 0;
	char *word;
	while(*string != '\0'){
		if(i<101){
			buffer[i] = *string;
			string ++;
			i++;
		}else{
			return -1;
		}
	}
	buffer[i] = '\0';
	for(word = strtok(buffer, white_space); word != NULL; word = strtok(NULL, white_space)){
		if(strcmp(word, "the") == 0){
			count ++;
		}
	}	
	return count;
}