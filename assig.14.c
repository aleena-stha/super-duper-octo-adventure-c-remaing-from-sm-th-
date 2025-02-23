//write a C program to perform all the arithmetic operation. Your program should task the required entity and let the user choose desired operation(calculator)
#include<stdio.h>
int main()
{
	float num1, num2, result;
	char operation;
	printf("enter the first number\n");
	scanf("%f", &num1);
	printf("enter the second number\n");
	scanf("%f", &num2);
	printf("choose operation +,-,*,/");
	scanf("%c", &operation);
	
	switch(operation)
	{
		case'+':
			result=num1 + num2;
			printf("%f+%f=%f\n", num1, num2, result);
			break;
		case'-':
			result=num1 - num2;
			printf("%f-%f=%f\n", num1, num2, result);
			break;
		case'*':
			result=num1*num2;
			printf("%f*%f=%f\n", num1, num2, result);
			break;
	    case'/':
	    	result=num1/num2;
	    	printf("%f/%f=%f\n", num1, num2, result);
	    	break;
	    	default:
	    	printf("invalid operation!");
	    	break;
	}
	return 0;
}
