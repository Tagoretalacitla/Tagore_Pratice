#include<stdio.h>
int main()
{
	int i,n;
	int a[100],b[100];
	printf("Enter the Number:");
	scanf("%d",&n);
	printf("Enter the %d of Numbers:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		b[i]=a[i];
	for(i=0;i<n;i++)
		printf("Copied array:%d\n",b[i]);
	return 0;
}
