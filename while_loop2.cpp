#include<stdio.h>
int main()
{
	int n=1,sum=0;
	while (n!=0)
	{
		printf("enter num");
		scanf("%d",&n);
		sum=sum+n;
		printf("sum=%d\n",sum);
	}
	return 0;
}
