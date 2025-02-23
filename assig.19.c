//write a C program to read percentage and find out whether the student has passed or failed. A student is passed only when his percentage is more than or equal to 50
#include<stdio.h>
int main()
{
	int percentage;
	printf("enter the percentage");
	scanf("%d", &percentage);
	if(percentage>=50)
	{
		printf("the student is passed");
	}
	else
	{
		printf("the student is failed");
	}
	return 0;
}
