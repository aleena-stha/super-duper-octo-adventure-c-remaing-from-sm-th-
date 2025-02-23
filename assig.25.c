//Sharma electronics has decided to offer a bumper discount to its customers on the Eve of dashian festical. The following table illustrate the percentage of discount that are offered to the customer based upon the purchase made:
#include<stdio.h>
int main()
{
	float purchase_amount;
	float discount, amount_to_be_paid;
	printf("enter the shopping amount\n");
	scanf("%f", &purchase_amount);
	if(purchase_amount<=1000)
	{
		discount=purchase_amount*0.5;
	}
	else if(purchase_amount<=5000)
	{
		discount=purchase_amount*0.1;
	}
	else if(purchase_amount<=10000)
	{
		discount=purchase_amount*0.15;
	}
	else
	{
		discount=purchase_amount*0.25;
	}
	
	amount_to_be_paid=purchase_amount-discount;
	printf("discount:%2f\n",discount);
	printf("amount to be paid:%.2f\n",amount_to_be_paid);
	
	return 0;
}
