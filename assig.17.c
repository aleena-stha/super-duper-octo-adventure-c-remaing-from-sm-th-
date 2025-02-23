//write a C program to read the age of a person and print whether the person is eligible to get married. Incase of a boy,age limit is 28 and the girl's age limit 25
#include<stdio.h>
int main()
{
	int boyage, girlage;
	printf("enter the boy age\n");
	scanf("%d", &boyage);
	printf("enter the age of girl\n");
	scanf("%d", &girlage);
	if(boyage>=28)
	{
		printf("\n Eligible to marry");
	}
	else
	{
		printf("\n Not eligilble to marry");
	}
	if(girlage>=25)
	{
		printf("\n Eligible to marry");
	}
	else
	{
		printf("\n Not eligible to marry");
	}
	return 0;
}
