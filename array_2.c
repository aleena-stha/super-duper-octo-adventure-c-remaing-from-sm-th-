�o4   e<stdio.h>
int main()
{
    int a[5]={2,3,4,5,6};
	int i;
	for(i=0; i<=4; i++)
	{
		printf("enter the value of a[%d]",i);
		scanf("%d",&a[i]);
		printf("a[%d]=%d",i,a[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
	
}
