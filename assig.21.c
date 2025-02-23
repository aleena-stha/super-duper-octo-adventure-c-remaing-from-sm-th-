//write a C program to reaad any two number and swap them
#include<stdio.h>
int main()
{
	float num1, num2, num3;
	printf("enter the two numbers\n");
	scanf("%f%f", &num1, &num2);
	num3=num1;
	num1=num2;
	num2=num3;
	printf("num1=%0.2f\n", num1);
	printf("num2=%0.2f\n", num2);
	
	return 0;
}
