#include<stdio.h>
int main()
{
	int a[100];
	int i,n,even=0,odd=0;
	printf("Enter the Number:");
	scanf("%d",&n);
	printf("Enter the %d of Numbers:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i] %2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		printf("Even: %d\n odd: %d\n",even,odd);
	}
	return 0;
}	
