//Write a program in C to display whether a given number is palindrome or not
#include<stdio.h>
int main()
{
	int num,rev;
	int rev_num=0;
	int checker;
	printf("Enter a number\n");
	scanf("%d",&num);
	checker=num;
	while(num!=0)
	{
		rev=num%10;
		rev_num=rev_num*10+rev;
		num=num/10;
	}
	printf("%d\n",rev_num);
	if(rev_num==checker)
	{
		printf("Number is a Palindrome\n");
    }
    else 
    {
    	printf("Number is not a Palindrome\n");
	}
	return 0;
}
