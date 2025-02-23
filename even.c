#include <stdio.h>
int main()
{
 int number;
 printf("Enter a number: ");
 scanf("%d", &number);
 // Check if the number is even
 if (number % 2 == 0) 
{
 printf("The number is even.\n");
 }
 return 0;
}
