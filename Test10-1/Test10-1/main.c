#include <stdio.h>

int main(void){

}

struct PHOEN_NUM{
	short area;
	short exchange;
	short station;
};

struct LONG_DISTANCE_BILL{
	short month;
	short day;
	short year;
	int time; 
	struct PHOEN_NUM called;
	struct PHOEN_NUM calling;
	struct PHOEN_NUM billed;
};