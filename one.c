//reversal of number 
#include<stdio.h>

int main()
{
	int num, rev=0, rm=0, n, count=0, number;
	printf("enter a number\n");
	scanf("%d",&num);
	number=num;
	printf("the entered number is %d\n",num);
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	printf("This is a %d digit number \nSo loop will run %d times\n",count,count);
	count=0;
	while(number!=0)
	{
		rev=number%10;
		number=number/10;
		rm=rm*10+rev;
		printf("Rev is %d\n",rev);
		printf("%d iteration Reversed number is %d\n",count, rm);
		count++;
	}
	return 0;
}

