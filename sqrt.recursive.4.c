#include<stdio.h>
#include<math.h>
int main()
{
	int a=16,sq;
	float b=1.4,c,d;
	
	sq=sqrt(a);
	printf("square root of %d is %d",a,sq);
	
	c=ceil(b); 
	d=floor(b);
	printf("c=%f d=%f",c,d);
	
	a=pow(2,4); //pow(base,power)
	printf("c=%d",c);
	return 0;
}
