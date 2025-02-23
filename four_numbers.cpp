//four numbers
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the value of a,b,c and d\n");
	scanf("%d\n%d\n%d\n%d\n,&a,&b,&c,&d");
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

