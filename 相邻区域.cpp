#include<stdio.h>
int main()
{
	int m,n,t,k;
	scanf("%d%d%d%d" ,&m,&n,&t,&k);
	
	int a[m][n];
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d" ,&a[i][j]);
		}
	}
	int p;
	int vis[401]={0};
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			int x[4]={1,-1,0,0};
			int y[4]={0,0,1,-1};
			if(a[i][j]==k)
			{
				for(p=0;p<4;p++)
				{
					if(i+x[p]>=0&&i+x[p]<m&&j+y[p]>=0&&j+y[p]<n)
					{
						if(a[i+x[p]][j+y[p]]!=k)
						{
							vis[a[i+x[p]][j+y[p]]]=1;		
						}
					}
				}
			}
		}
	}
	int cnt=0;
	for(i=0;i<401;i++)
	{
		if(vis[i]==1)
		{
			cnt++;
		}
	}
	printf("%d" ,cnt);
	return 0;
}