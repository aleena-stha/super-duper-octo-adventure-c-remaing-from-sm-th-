//reverse string
#include<stdio.h>
int main()
{
	char str[30],revstr[30];
	int i,j,count;
	printf("enter string");
	gets(str);
	for(i=0;str[i]!='\0';i++);
	printf("count=%d",i);
	count=i;
	j=count-1;
	for(i=0;i<count;i++)
	{
		revstr[j]=str[i];
		j--;
	}
	revstr[count]='\0';
	printf("reverse=");
	puts(revstr);
	
	
	return 0;
}
