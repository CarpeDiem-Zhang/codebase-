#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d" ,&m,&n);
	
	int a[m][n];
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d" ,&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		int d=0;
		int max=0;
		int maxdi=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]==1)
			{
				d++;
				if(d>max)
				{
					max=d;
					maxdi=j;
				}
			}
			else
			{
				d=0;
			}
		}
		if(max == 0)
		{
			printf("-1 -1\n");
		}
		else
		{
			int start = maxdi - max + 1;
			printf("%d %d\n" , start, maxdi);
		}
	}
	return 0;
}