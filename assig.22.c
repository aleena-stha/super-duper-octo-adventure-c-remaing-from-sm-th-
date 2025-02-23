//write a C program to read any four numbers and print the greatest and smallest among them
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the four numbers\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is the greatest\n");
			}
			else
			{
				printf("d is the greatest\n");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is the greatest\n");
			}
			else
			{
				printf("d is the greatest\n");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is the greatest\n");
			}
			else
			{
				printf("d is the greatest\n");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is the greatest\n");
			}
			else
			{
				printf("d is the greatest\n");
			}
		}
	}
	return 0;
}
