#include <stdio.h>
#include <stddef.h>

size_t my_strnlen(char const *string, int size);

int main(void){

}

size_t my_strnlen(char const *string, int size){
	register size_t length;
	for(length=0; length<size; length++){
		if(*string++ == '\0' ){
			break;
		}
	}
	return length;
}