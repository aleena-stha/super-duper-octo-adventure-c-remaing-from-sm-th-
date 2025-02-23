#include<stdio.h>
int main()
{
	int rows;
	printf("no.of rows:");
	scanf("%d",& rows);
	
	for (int i =1; i <=rows; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
