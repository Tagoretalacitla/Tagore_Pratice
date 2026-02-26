#include <stdio.h>
int main()
{
	int a[100], n, i;
	int count = 0;
	printf("Enter the Number:");
	scanf("%d", &n);
	printf("Enter the %d of Numbers:",n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(i = 0; i < n; i++)
	{
		if(a[i] == 0)
			count++;
		
	}
	printf("Total zero elements = %d\n", count);

	return 0;
}
