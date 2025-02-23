//get a number input from user and find square root using function
#include<stdio.h>
float square(float num)
{
	return num*num;
}
int main()
{
	float num,square_function;
	printf("get a num from user");
	scanf("%f",&num);
	square_function=square(num);
	printf("the square_function is %.2f\n",square_function);
	return 0;
}
