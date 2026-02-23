#include <stdio.h>
int main()
{
	int arr[100], n, i;
	int max, second;
	printf("Enter the Number:");
	scanf("%d", &n);
	printf("Enter %d of Numbers:",n);
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	max = arr[0];
	for(i = 1; i < n; i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}
	second = arr[0];
	for(i = 0; i < n; i++)
	{
		if(arr[i] != max && arr[i] > second)
			second = arr[i];
	}
	printf("Second largest = %d\n", second);
	return 0;
}
