//write a C program to find the area of a circle
#include<stdio.h>
int main()
{
	int r, area;
	printf("enter the radius\n");
	scanf("%d", &r);
	area=22/7*r*r;
	printf("area of circle=%d", area);
	
	return 0;
}
