�o4   a C program to read p,t,n and r and find the simple interest, amount, compound interest and compound amount
#include<stdio.h>
int main()
{
	float p,t,n,r;
	float simple_interest;
	float amount;
	float compound_interest;
	float compound_amount;
	
	printf("enter the priciple\n");
	scanf("%f",&p);
	
	printf("enter the time\n");
	scanf("%f",&t);
	
	printf("enter the rate\n");
	scanf("%f",&r);
	
	printf("enter the number of compound years\n");
	scanf("%f",&n);
	
	simple_interest=p*t*r/100;
	printf("the simple_interest is %0.2f\n",simple_interest);
	
	amount=p+simple_interest;
	printf("the amount is %0.2f\n",amount);
	
	compound_interest=p*pow(1+r/100*n,n*t)-p;
	printf("the compund_interest is %0.2f\n",compound_interest);
	
	compound_amount=p+compound_interest;
	printf("the compound_interest is %0.2f\n",compound_amount);
	
	return 0;
}
