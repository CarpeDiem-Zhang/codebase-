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
	int max=0;
	int pos_max,pos_min;
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			pos_max=i;
		}
	}
	int min=max;
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
			pos_min=i;
		}
	}
	int temp;
	temp=arr[pos_max];
	arr[pos_max]=arr[pos_min];
	arr[pos_min]=temp;
	for(i=0;i<n;i++)
	{
		printf("%d " ,arr[i]);
	}
	return 0;
}