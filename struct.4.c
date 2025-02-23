#include<stdio.h>

struct Marksheet{
	int rollNo;
	char Name[30];
	float Sub1,Sub2,Sub3,total,per;
};

int main()
{
	int i;
	struct Marksheet m[10];
	int c;
	for(i=0;i<3;i++)
	{
		printf("Enter student Roll_no");
		scanf("%d",&m[i].rollNo);
		
	
    	while(c=getchar()!='\n');
		printf("Student Name ");
		gets(m[i].Name);
		
		printf("\nEnter sub1,sub2,sub3");
		scanf("%f%f%f",&m[i].Sub1,&m[i].Sub2,&m[i].Sub3);
		m[i].total=m[i].Sub1+m[i].Sub2+m[i].Sub3;
		m[i].per=m[i].total/3;
		
	}
	   printf("Roll no\t Student name\t Sub1\t Sub2\t Sub3\t Total\t Percent\n");
	   for(i=0;i<3;i++)
	{
		
		printf("%d\t %s\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f\n",m[i].rollNo,m[i].Name,m[i].Sub1,m[i].Sub2,m[2].Sub3,m[i].total,m[i].per);
	}
	
	return 0;
}
