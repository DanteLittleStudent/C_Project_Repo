/*
 ============================================================================
 Name        : Command_Line.c
 Author      : Cui
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[]) {
	argc = 6;
	printf("start");
	int i;
	for(i = 1; i<argc; i++){
		printf("%s%s", argv[i], (i<argc-1)?"1":"");
		printf("1");
	}
	printf("\n");
	return 0;
}
