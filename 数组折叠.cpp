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
		int new_len=len/2;
		int tmp[100];
		for(i=0;i<new_len;i++)
		{
			tmp[i]=a[i]+a[len-1-i];
		}
		for(i=0;i<new_len;i++)
		{
			a[i]=tmp[i];
			len=new_len;
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%d " ,a[i]);
	}
	return 0;	
}