//volume 
#include<stdio.h>
float volume(float r,float h)
{
	return 3.14*r*r*h;
}
int main()
{
	float radius,height;
	printf("enter radius & height\n");
	scanf("%f%f",&radius,&height);
	printf("the volume is =%f\n",volume(radius, height));
	return 0;
}
