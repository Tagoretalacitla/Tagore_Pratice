#include <stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=n-i; j>=1; j--)
		{
			printf("  ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		for(j=i-1; j>=1;j--)
		{
		printf("%d ",j);
		}

		printf("\n");
	}
	return 0;
}
