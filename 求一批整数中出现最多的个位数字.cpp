#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d" ,&n);
	int count[10]={0};
	for(int i=0;i<n;i++)//计数每个数次出现的次数
	{	
		int temp=0;
		scanf("%d" ,&a);
		if(a==0)
		{
			count[0]++;
			continue;
		}
		else
		{
			while(a)
			{
				 temp=a%10;
				 count[temp]++;
				 a /= 10;
			}
		}
	}
	int max_count=0;//找出最大次数
	int j=0,k=0;
	int num[10];
	for(j=0;j<10;j++)
	{
		if(count[j]>=max_count)
		{
			max_count=count[j];
		}
	}
	printf("%d:" ,max_count);//找出与最大次数相同的数输出
	for(j=0;j<10;j++)
	{
		if(count[j]==max_count)
		{
			printf(" %d" ,j);	
		}
	}
	return 0;
}