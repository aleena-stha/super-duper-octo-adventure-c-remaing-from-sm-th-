//write a C program to find the circumference of a circle
#include<stdio.h>
int main()
{
	int r, circumference;
	printf("enter the radius\n");
	scanf("%d", &r);
	circumference=2*22/7*r;
	printf("cicrumference of circle=%d\n", circumference);
	
	return 0;
}
