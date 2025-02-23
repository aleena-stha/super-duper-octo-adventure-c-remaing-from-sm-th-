#include<stdio.h>
float sum(float s1, float s2, float s3, float s4)
{
	return s1+s2+s3+s4;
}
float Findpercent(float total)
{
	return total/4;
}

void printtotal (float T)
{
	printf("total marks=%f",T);
}
void printpercent(float p)
{
	printf("\npercentage=%f",p);
}
void Finddivision(float per)
{
	if(per>=80)
	{
		printf("distinction");
	}
	else if (per>=60)
	{
		printf("first division");
	}
	else if (per>=40)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	
}
int main()
{
	float s1,s2,s3,s4,tot,per;
	printf("enter value of s1,s2,s3,s4");
	scanf("%f%f%f%f",&s1,&s2,&s3,&s4);
	tot=sum(s1,s2,s3,s4);
	printtotal(tot);
	per=Findpercent(tot);
	printpercent(per);
	Finddivision(per);
	
	return 0;
}
