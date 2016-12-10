#include<stdio.h>

int main(void)
{
	
}

struct CUSTOMER
{
	char name[20];
	char address[40];
	char model[20];
};

struct PRICE_MESSAGE
{
	float suggested_retail_price;
	float actual_selling_price;
};

struct TAX_MESSAGE
{
	float sales_tax;
	float licening_fee;
};

struct LEASE_MESSAGE
{
	float down_payment;
	float security_deposit;
	float monthly_payment;
	float lease_term;
};

struct LOAN_MESSAGE
{
	float down_payment;
	int loan_duration;
	float interest_rate;
	float monthly_payment;
	char bank_name[20];
};

struct CASH
{
	struct CUSTOMER cash_customer;
	struct PRICE_MESSAGE cash_price;
	struct TAX_MESSAGE cash_tax;
};

struct  LEASE
{
	struct CUSTOMER lease_customer;
	struct PRICE_MESSAGE lease_price;
	struct LEASE_MESSAGE lease_message;
};

struct LOAN
{
	struct CUSTOMER loan_customer;
	struct PRICE_MESSAGE loan_price;
	struct LOAN_MESSAGE loan_message;
};