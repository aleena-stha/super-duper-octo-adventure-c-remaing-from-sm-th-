#include<stdio.h>
int main()
{
	int r,c,a[100][100], b[100][100], sum[100][100],i,j;
	printf("enter the number of rows (between 1 and 100): ");
	scanf("%d",&r);
	printf("enter the number of columns (between 1 and 100): ");
	scanf("%d",&c);
	
	printf("\nEnter elements of 1st matrix:\n");
	for(i=0; i<r; ++i)
	{
		for (j=0; j<c; ++j)
		{
			printf("enter the element a%d%d: ",i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("enter elements of 2nd matrix:\n");
	for(i=0; i<r;++i)
	for (j=0;j<c;++j)
	{
		printf("enter the elements b%d%d: ",i+1,j+1);
		scanf("%d", &b[i][j]);
	}
	//adding two matrices
	for(i=0;i<r;++i)
	for(j=0;j<c;++j){
		sum[i][j]=a[i][j]+b[i][j];
	}
	
	//printing the result 
	printf("\nsum of two matrices:\n");
	for(i=0;i<r;++i)
	for(j=0;j<c;++j) {
		printf("%d",sum[i][j]);
		if(j==c-1){
			printf("\n\n");
		}	
	}
	
	return 0;
}
	
	

