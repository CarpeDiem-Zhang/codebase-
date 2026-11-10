#include<stdio.h>
int main()
{
	int m;
	scanf("%d" ,&m);
	
	int i,j;
	int a[m][m];
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d" ,&a[i][j]);
		}
	}
	int sum[100]={0};
	int k=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			sum[k]+=a[i][j];
		}
		k++;
	}
	for(j=0;j<m;j++)
	{
		for(i=0;i<m;i++)
		{
			sum[k]+=a[i][j];
		}
		k++;
	}
	for(i=0;i<m;i++)
	{
		sum[k]+=a[i][i];
	}
	k++;
	for(i=0;i<m;i++)
	{
		sum[k]+=a[i][m-1-i];
	}
	k++;
	int temp=0;
	for(i=0;i<k-1;i++)
	{
		for(j=0;j<k-1-i;j++)
		{
			if(sum[j]<sum[j+1])
			{
				temp=sum[j];
				sum[j]=sum[j+1];
				sum[j+1]=temp;	
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d " ,sum[i]);
	}
	
	
	
	
	return 0;
}