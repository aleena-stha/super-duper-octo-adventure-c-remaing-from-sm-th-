#include<stdio.h>
float calculateSum(float num[]);
int main()
{
	float result,num[]={2,3,4,8,9};
	result=calculateSum(num);
	printf("Sum=%2f",result);
	return 0;
}
float calculateSum(float num[])
{
	int i;
	float sum=0.0;
	for(i=0;i<6;i++)
	{
		sum+=num[i];
	}
	return sum;
}
