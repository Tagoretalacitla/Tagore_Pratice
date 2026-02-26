#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the Number of Rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n-1;j++)
		{
			printf("%c",'A'+j-1);
		}
		printf("\n");
	}
	return 0;
}
