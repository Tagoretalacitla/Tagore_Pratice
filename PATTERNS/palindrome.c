#include <stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i = 1;i < n; i++)
	{
		for(j=i; j>=1; j--)
		{
			printf("%d",j);
		}
		for(j=2;j<=i;j++)
		{
		printf("%d",j);
		}
		
		printf("\n");
	}
	return 0;
}
