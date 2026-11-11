#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d" ,&n,&m);
	
	int len=1<<n;
	int a[len];
	int i;
	for(i=0;i<len;i++)
	{
		scanf("%d" ,&a[i]);
	}
	for(i=0;i<m;i++)
	{
		int j;
		int new_len=len/2;
		int tmp[100];
		for(j=0;j<new_len;j++)
		{
			tmp[j]=a[j]+a[len-1-j];
		}
		for(j=0;j<new_len;j++)
		{
			a[j]=tmp[j];
			len=new_len;
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%d " ,a[i]);
	}
	return 0;	
}