//write a C program to find the perimeter of a triangle
#include<stdio.h>
int main()
{
	int a,b,c,perimeter;
	printf("enter a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	perimeter=a+b+c;
	printf("perimeter of triangle=%d\n",perimeter);
	
	return 0;
}
