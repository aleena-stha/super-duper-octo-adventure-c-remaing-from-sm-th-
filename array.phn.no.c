�o4   e<stdio.h>
#include<string.h>
int main()
{
	char phone[10];
	printf("enter a phone number:");
	scanf("%s",phone);
	printf("%c%c%c%c%c%c%c%c%c%c\n", phone[0], phone[1], phone[2], phone[3], phone[4], phone[5],phone[6], phone[7], phone[8], phone[9]);
	
	return 0;
}
