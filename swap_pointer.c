//c program to swap two values
//without passing pointer to
//swap function
#include<stdio.h>

void swap(int* a, int* b)
{
	int temp;
	temp=*a;
	*a = *b;
	*b = temp;
}

//Driver code
int main()
{
	int a=10, b=20;
	printf("values before swap function are:%d, %d\n",a,b);
	swap(&a, &b);
	printf("values after swap function are:%d, %d",a, b);
	
	return 0;
}
