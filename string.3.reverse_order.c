//Print the name in reverse order
#include<stdio.h>
int main()
{
	int i,j;
	char name[30];
	printf("enter name\n");
	gets(name);
	for(i=0;name[i]!='\0';i++);
	printf("count=%d",i);
	for(j=i-1;j>=0;j--)
	{
		printf("%c",name[j]);
	}
	return 0;
}
