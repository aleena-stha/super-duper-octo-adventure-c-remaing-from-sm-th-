//
#include<stdio.h>
int main()
{
	int i,j;
	int n=9;
	for(i=0;i<n/2;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
		printf("\n");
	}
	for(i=0;i<n/2+1;i++)
	{
		for(j=i;j<n/2+1;j++)
		{
			printf("*");
		}
		printf("\n");
		printf("\n");
	}
	return 0;
}
