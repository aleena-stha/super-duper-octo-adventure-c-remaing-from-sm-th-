//wrirte a C program to read a number and print whethe the number is positive or negative
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d", &n);
	if(n>0)
	{
		printf("\nPositive");
	}
	else
	{
		printf("\nNegative");
	}
	return 0;
}
