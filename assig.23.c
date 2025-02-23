//write a C program to calculate the percentage scored by the students who read five subjects. Your algorithm should read the pass mark, full mark and obtained mark of every subject and caluclate the percentage. After that calculation of the percentage your program should print the grade obtained by the student which is based upon the following criteria.
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total,per;
	float grade;
	printf("enter the marks of 5 subjects\n");
	scanf("%d%d%d%d%d",&m1, &m2, &m3, &m4, &m5);
	total=m1+m2+m3+m4+m5;
	per=total/5;
	printf("total=%d\n", per);
	if(per>=80)
	{
		printf("Grade:Distinction");
	}
	else if(per>=60)
	{
		printf("Grade:First Division");
	}
	else if(per>=45)
	{
		printf("Grade:Second Division");
	}
	else if(per>=32)
	{
		printf("Grade:First Division");
	}
	else
	{
		printf("Grade:N/A");
	}
	return 0;
	
}
