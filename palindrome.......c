//palindrome
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
	
	int b=0;
	
	for(i=0;i<count;i++)
	{
		if(str[i]==revstr[i])
		{
			b++;
		}
	}
	
	if(b==count)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");;
	}
	return 0;
}
