�o4   a C program to read three numbers and find the product of the numbers.
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	int product;
	printf("Enter first number\n");
	scanf("%d",&num1);
	printf("Enter second number\n");
	scanf("%d",&num2);
	printf("Enter third number\n");
	scanf("%d",&num3);
	product=num1*num2*num3;
	printf("product is %d\n",product);
	
	return 0;
}
