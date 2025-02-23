#include<stdio.h>
int main()
{
	int num, num1;
	num=37;
	num1=num%10,
	printf("num1=%d",num1);//after using modulus
	num++;
	num++;
	printf("num=%d",num);
	num--;
	printf("num=%d",num);
	return 0;
	
}
