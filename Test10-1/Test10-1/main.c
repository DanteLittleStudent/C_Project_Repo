#include <stdio.h>

int main(void){

}

/* 第一种表述方式 */

struct LongCall
{
	short month;
	short day;
	short year;
	struct PHONE_NUM calling;
	struct PHONE_NUM called;
	struct PHONE_NUM billing;
};

struct PHONE_NUM
{
	short area;
	short exchange;
	short station;
};

/*  结束 */

/* 第二种表述方式  使用数组的方式*/

enum CALL_TYPE
{
	CALLING,
	CALLED,
	BILLING
};

struct LONG_CALL_2
{
	short month;
	short day;
	short year;
	int time;
	struct PHONE_NUM numbers[3];
};
