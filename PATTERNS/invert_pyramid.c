#include <stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i =n-1; i>=1; i--)
	{
	for(j=n-i;j>=1;j--)
		{
			printf("  ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
