#include <stdio.h>
#include <string.h>
#define SIZE 10

static char* digits[] = {" ", "ONE ", "TWO ", "THREE ", "FOUR ", "FIVE ", "SIX ", "SEVEN ", "EIGHT ", "NINE ", "TEN ", 
"ELEVEN ", "TWELVE ", "THIRDTEEN ", "FOURTEEN ", "FIFTEEN ", "SIXTEEN ", "SEVENTEEN ", "EIGHTEEN ", "NINETEEN "};

static char* tens[] = {" ", " ", "TWENTY ", "THIRTY ", "FORTY ", "FIFTY ", "SIXTY ", "SEVENTY ", "EIGHTY ", "NINETY "};

static char* magnitudes[] = {" ", "THOUSAND ", "MILLION ", "BILLION "};

void written_amount(unsigned int amount, char* buffer);
static void do_one_group(unsigned int amount, char* buffer, char** magnitudes);

int main(void){
	unsigned int number;
    char str[] = "";
    while (scanf ("%d", &number) == 1){
		if(number == -1){
			break;
		}else{
			written_amount (number, str);
			puts (str);
		}
    }
    return 0;
}

void written_amount(unsigned int amount, char* buffer){
	if(amount == 0){
		strcpy(buffer, "ZERO");
	}else{
		*buffer =='\0';
		do_one_group (amount, buffer, magnitudes);
	}
}

static void do_one_group(unsigned int amount, char* buffer, char** magnitudes){
	int value;
	value = amount / 1000;
	if(value > 0){
		do_one_group(value, buffer, magnitudes + 1);
	}
	amount = amount % 1000;
	value = amount / 100;
	if(value > 0){
		strcat(buffer, digits[value]);
		strcat(buffer, "HUNDRED ");
	}
	value = amount % 100;
	if(value >= 20){
		strcat(buffer, tens[value/10]);
		value = value % 10;
	}
	if(value > 0){
		strcat(buffer, digits[value]);
	}
	if(amount > 0){
		strcat (buffer, *magnitudes);
	}
}