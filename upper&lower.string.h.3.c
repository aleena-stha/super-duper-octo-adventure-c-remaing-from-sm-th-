//upper and lower of string
#include<stdio.h>
#include<string.h>
int main()
{
	char fn[30]="ISMT";
	char sn[30]="College";
	printf("value of fn & sn\n");
	puts(fn);
	puts(sn);
	strcat(fn,sn); //cat-joins string
	puts(fn);
	strlwr(fn);
	puts(fn);
	strupr(sn);
	puts(sn);
	
	return 0;
}
