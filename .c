
o4  e<stdio.h>
float volume(float length, float breadth, float height)
{
	return l*b*h;
}
int main()
{
	float length,breadth,height;
	printf("enter length,breadth,height\n");
	scanf("%f",&length,&breadth,&height);
	printf("the volume is=%f\n",volume(length,breadth,height));
	
	return 0;
}
