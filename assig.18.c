//write a C program to read a number and print whether the number is a multiple of 9
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d", &n);
	if(n%9==0)
	{
		printf("the number is a multiple of 9\n");
	}
	else
	{
		printf("the number is not a multiple of 9\n");
	}
	return 0;
}
