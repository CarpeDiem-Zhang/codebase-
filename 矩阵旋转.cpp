#include<stdio.h>
int main()//顺时针旋转90
{
	int m,n;
	scanf("%d%d" ,&m,&n);
	
	int i,j;
	int a[m][n],b[n][m];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d" ,&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][m-1-i]=a[i][j];//原来的列做行，原来的列上下位置调换	//逆时针b[n-1-j][i]=a[i][j]
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d " ,b[i][j]);
		}
		printf("\n");
	}
	return 0;
}