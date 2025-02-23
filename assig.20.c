//write a C program to read any year and print whether the year is leap year or not 
#include<stdio.h> 
int main()
{
	int year;
	printf("enter the year\n");
	scanf("%d", &year);
	if(year/400==0)
	{
		printf("the year is a leap year\n");
	}
	else
	{
		printf("the year is not a leap year\n");
	}
    if(year/4)
	{
		printf("the year is a leap year\n");
	}
	else
	{
		printf("the year is not a leap year\n");
	}
	return 0;
	
}
