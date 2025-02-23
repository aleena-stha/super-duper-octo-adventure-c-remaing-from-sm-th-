//To count alphabet in string
#include<stdio.h>
int main()
{
	int i;
	char name[30];
	printf("enter name");
	gets(name);
	for(i=0;name[i]!='\0';i++);
	printf("count=%d",i);
	
	return 0;
}   
