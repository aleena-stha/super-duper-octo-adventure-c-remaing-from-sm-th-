o4  e<stdio.h>
int main()
{
	int arr[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter array elements\n");
		scanf("%d\n", arr[i]);
		printf("d\t",arr[i]);
	}
	for(i=4;i>0;i--)
	{
		printf("a[%d]=%d\n",arr[i],i);
	}
	return 0;
}
