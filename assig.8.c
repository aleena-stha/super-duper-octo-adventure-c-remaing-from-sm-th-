//write a c program to find the area of triangle 
#include<stdio.h>
int main()
{
	float b, h, area;
	printf("enter the breadth\n");
	scanf("%f", &b);
	printf("enter the height\n");
	scanf("%f", &h);
	area=(b*h)*0.5;
	printf("the area=%f\n", area);
	
	return 0;
}
