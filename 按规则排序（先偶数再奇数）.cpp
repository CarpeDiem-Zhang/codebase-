#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	int arr[n];
	
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	int temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]<arr[j+1])//每一轮把最小的送到最后，下一轮少排一个数
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	int ec=0,oc=0;
	int even[100],odd[100];
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even[ec++]=arr[i];
		}
		else
		{
			odd[oc++]=arr[i];
		}
	}
	for(i=0;i<ec;i++)
		printf("%d " ,even[i]);
	for(i=0;i<oc;i++)
		printf("%d " ,odd[i]);

	return 0;
}