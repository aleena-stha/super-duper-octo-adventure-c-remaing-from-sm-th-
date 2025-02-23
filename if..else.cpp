#include<stdio.h>

int main( )
{
	int age;
	printf("enter age");
	scanf("%d", &age);
	if (age>=18)
{
	printf("You can vote");
}
else 
{
	printf("Not eligible");
}
return 0;
}


