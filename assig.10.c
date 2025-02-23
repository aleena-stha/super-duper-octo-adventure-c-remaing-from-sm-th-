//write a C program to find the voulume and surface area of a cube
#include<stdio.h>
int main()
{
	int l,volume,area;
	printf("enter the length\n");
	scanf("%d",&l);
	volume=l*l*l;
	area=6*(l*l);
	printf("volume of cube=%d\n", volume);
	printf("area of cube=%d\n", area);
	
	return 0;	
}
