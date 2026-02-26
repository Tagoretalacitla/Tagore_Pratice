#include<stdio.h>
int main()
{
	int i,j,n;
	char ch='A';
	printf("Enter the Number of Rows:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=n-i;j>=1;j--)
		{
			printf(" ");
		}	
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}
