#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d" ,&m,&n);
	
	int arr[m][n];
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			arr[i][j]=0;
			scanf("%d" ,&arr[i][j]);
		}
	}
	int grey[16]={0};
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			grey[arr[i][j]]++;
		}
	}
	for(i=0;i<16;i++)
	{
		if(grey[i]!=0)
		{
			printf("%d %d\n" ,i,grey[i]);
		}
	}
	return 0;
}