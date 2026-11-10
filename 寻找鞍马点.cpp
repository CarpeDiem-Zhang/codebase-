#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d" ,&m,&n);
	
	int i,j;
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d" ,&a[i][j]);
		}
	}
	int x,y;
	int flag_x=1,flag_y=1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			flag_x=1,flag_y=1;
			for(x=0;x<n;x++)
			{
				if(a[i][x]<a[i][j])
					flag_x=0;
			}
			for(y=0;y<m;y++)
			{
				if(a[y][j]>a[i][j])
					flag_y=0;
			}
			if(flag_x==1&&flag_y==1)
			{
				printf("%d %d %d\n" ,i,j,a[i][j]);
			}
		}
	}
	if(flag_x!=0||flag_y!=0)
	{
		printf("no\n");
	}
	return 0;
}