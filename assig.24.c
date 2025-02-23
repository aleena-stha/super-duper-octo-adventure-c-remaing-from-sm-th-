//The Arya Group of a community has decided to offer a bonus to its employee on the basis of the sales made by the employee. The bonus is calculated over the employee salar. The following table illustrate the bonus calculation:
#include<stdio.h>
int main()
{
	float basic_salary;
	float Bonus, gross_salary;
	printf("enter the basic salary");
	scanf("%f",basic_salary);
	if(basic_salary<=10000)
	{
		Bonus=basic_salary*0.1;
	}
	else if(basic_salary<=50000)
	{
		Bonus=basic_salary*0.15;
	}
	else
	{
		Bonus=basic_salary*0.2;
	}
	
	gross_salary=basic_salary+Bonus;
	printf("Bonus:%2f\n",Bonus);
	printf("gross_salary:%2f\n",gross_salary);
	
	return 0;
}
