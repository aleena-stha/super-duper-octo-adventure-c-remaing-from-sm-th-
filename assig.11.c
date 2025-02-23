//write a C program to find the voulume and surface area of a cuboid
#include<stdio.h>
int main()
{
	int l,b,h,volume,area;
	printf("enter the length\n");
	printf("enter the breadth\n");
	printf("enter the height\n");
	scanf("%d%d%d",&l,&b,&h);
	volume=l*b*h;
	area=2*(l*b+ b*h+ h*l);
	printf("volume of cuboid=%d\n",volume);
	printf("area of cuboid=%d\n",area);
	
	return 0;	
}
