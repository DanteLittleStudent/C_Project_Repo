#include <stdio.h>
#include <string.h>

char* reverse_str(char* string);

int main(void){
	char string[] = "12345";
	printf("½á¹û:%s\n",reverse_str(string));
	return 0;
}

char* reverse_str(char* string){
	char* last_char = string;
	char* first_char = string;
	char temp; 
	while(*last_char++);
	last_char = last_char -2;
	while(first_char < last_char){
		temp = *first_char;
		*first_char++ = *last_char;
		*last_char-- = temp;
	}
	return first_char;
	
}