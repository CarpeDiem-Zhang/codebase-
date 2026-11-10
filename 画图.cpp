#include<stdio.h>
#define N 100
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int arr[N][N]={0};
	int i,j,k;
	for(k=0;k<n;k++)
	{
		int a,b,c,d;
		scanf("%d%d%d%d" ,&a,&b,&c,&d);
		for(i=a;i<c;i++)
		{
			for(j=b;j<d;j++)
			{
				arr[i][j]++;
			}
		}
	}
	int count=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(arr[i][j]!=0)
				count++;
		}
	}
	printf("%d",count);
	return 0;
}