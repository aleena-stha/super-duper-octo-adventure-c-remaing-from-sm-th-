//Write a program in C to display the cube of the number upto given an integer.
#include<stdio.h>
float cube(float num)
{
	return num*num*num;
}
int main()
{
	float num,cube_function;
	printf("get a num from user from 1 to 5\n");
	scanf("%f",&num);
	cube_function=cube(num);
	printf("the cube_function is %.2f\n",cube_function);
	puts("hello");
	return 0;
}
