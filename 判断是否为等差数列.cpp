#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int arr[n]={0};
	int i,j;
	int temp=0;
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	int d=arr[1]-arr[0];
	int flag=1;
	for(i=0;i<n-1;i++)	
	{
		if(arr[i+1]-arr[i]!=d)
		{
			flag=0;
			break;
		}
		
	}
	if(flag==1)
		printf("%d" ,d);
	else
		printf("no");	
	return 0;
}