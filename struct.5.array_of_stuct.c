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
	
	for(i=0;i<10;i++)
	{
		printf("Enter student Name");
		scanf("%d",&m[i].rollNo);
		printf("Student Name");
		gets(m[i].Name);
		printf("Enter sub1,sub2,sub3");
		scanf("%f%f%f",&m[i].Sub1,&m[i].Sub2,&m[i].Sub3);
		m[i].total=m[i].Sub1+m[i].Sub2+m[i].Sub3;
		m[i].per=m[i].total/3;
		
	}
	   printf("Roll no\tStudent name\t Sub1\t Sub2\t Sub3\n");
	   for(i=0;i<10;i++)
	{
		
		printf("%d\t %s\t %f\t %t\f %t\f %t\f %t\f\n",m[i].rollNo,m[i].Name,m[i].Sub1,m[i].Sub2,m[2].Sub3,m[i].total,m[i].per);
	}
	return 0;
}
