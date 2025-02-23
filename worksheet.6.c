//Write a program in C to display the n terms of odd natural number and their sum.
#include<stdio.h>
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	int i=1;
	int sum=0;
	while(i<num)
	{
		printf("%d\n",i);
		sum+=i;
		i+=2;
		printf("the sum of odd natural number is %d:%d",num,sum);
	}
	return 0;
}
