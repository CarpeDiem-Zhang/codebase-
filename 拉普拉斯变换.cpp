#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int i;
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	int b[n-2];
	for(i=0;i<n-2;i++)
	{
		b[i]=arr[i]-2*arr[i+1]+arr[i+2];
	}
	for(i=0;i<n-2;i++)
	{
		printf("%d " ,b[i]);
	}
	return 0;
}