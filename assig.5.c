�o4   a C program to find the perimeter of a rectangle.//
#include<stdio.h>
int main()
{
	int l, w, perimeter;
	printf("enter value of length\n");
	scanf("%d",&l);
	printf("enter the value of width\n");
	scanf("%d", &w);
	perimeter=2*(l+w);
	printf("perimeter=%d", perimeter);
	
	return 0;
}
