�o4    in ascending order
#include<stdio.h>
int main()
{
	int a[10];
	int i,j,temp;
	printf("enter 10 numbers from user:\n");
	for(i=0;i<10;i++)
	{
		printf("enter a value");
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Given number by user are in ascending order as:");
	for(i=0;i<10;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
	
}
