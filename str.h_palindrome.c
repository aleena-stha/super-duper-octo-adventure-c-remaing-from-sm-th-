//palindrome in str.h
#include<stdio.h>
int main()
{
	char str[30], revstr[30];
	int cmp;
	gets(str);
	
	strcpy(revstr,str);
	puts(revstr);
	strrev(revstr);
	cmp=strcmp(str,revstr);;
	
	if(cmp==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
	return 0;
}
