#include<stdio.h>
int main()
{
	int rn=0,n,rem;
	printf("enter n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rn=rn*10+rem;
		n=n/10;
	}
	printf("reverse num=%d",rn);
	return 0;
}

