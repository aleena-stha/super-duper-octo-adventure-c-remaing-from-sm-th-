�o4   a C program to read numbers and find the sum of numbers
#include<stdio.h>
int main()
{
	int num1, num2, sum;
	printf("enter the num1\n");
	scanf("%d",&num1);
	printf("enter the num2\n");
	scanf("%d",&num2);
	sum=num1+num2;
	printf("the sum=%d",sum);
	
	return 0;
}
