�o4   e<stdio.h>
int main()
{
	int i;
	int sum=0;
	int arr[5];
	printf("Enter array values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Sum is %d \n",sum);
	return 0;
}
