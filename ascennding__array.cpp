�o4  e<stdio.h>
int main()
{
	int a[5],i,j,temp;
	for(i=0;i<5;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(i=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		
		}	
	}
	printf("number is ascending order");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
	
}
