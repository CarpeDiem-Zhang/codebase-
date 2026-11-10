#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int arr[51];
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	int sum=0;
	for(i=1;i<=n;i++)
	{
		sum += arr[i];
	}
	int max=arr[1];
	int index_max=1;
	for(i=1;i<=n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			index_max=i;
		}
	}
	int min=arr[1];
	int index_min=1;
	for(i=1;i<=n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
			index_min=i;
		}
	}
	printf("%d %d %d %d %d" ,sum,max,index_max,min,index_min);
	return 0;
}