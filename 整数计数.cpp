#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int arr[n];
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	int temp=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	i=0;
	while(i<n)
	{
		int count=1;
		while(i+1<n&&arr[i]==arr[i+1])
		{
				count++;
				i++;
		}
		printf("%d:%d\n" ,arr[i],count);
		i++;
	}
	return 0;
}