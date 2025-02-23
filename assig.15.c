//write a c program to read a number and print whether the number is odd or even
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d", &n);
	if(n%2==0)
	{
		printf("\nEven");
	}
	else
	{
		printf("\nOdd");
	}
	return 0;
}
