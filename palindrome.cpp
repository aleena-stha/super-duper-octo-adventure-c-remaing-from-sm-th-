#include<stdio.h>
int main()
{
	int rn=0,n,rem,palindrome;
	printf("enter number");
	scanf("%d",&n);
	      //this line is optional
	while(n!=0)
	{
		rem=n%10;
		rn=rn*10+rem;
		n=n/10;
	}
	if(n==palindrome)
	printf("Number is palindrome");
	else
	printf("Number is not palindrome");
	return 0;
}

