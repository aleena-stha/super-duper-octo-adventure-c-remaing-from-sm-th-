p4   a c program to find the perimeter of a square.
#include<stdio.h>
int main()
{
	float l,perimeter;
	printf("enter the length\n");
	scanf("%f",&l);
	perimeter=4*l;
	printf("perimeter of square=%0.25f\n",perimeter);
	
	return 0;
}
