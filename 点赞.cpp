#include<stdio.h>
int main()
{
	int arr[101]={0};
	int n;
	scanf("%d" ,&n);
	
	for(int i=0;i<n;i++)
	{
		int a;
		scanf("%d" ,&a);
		for(int j=0;j<a;j++)
		{
			int good;
			scanf("%d" ,&good);
			for(int k=1;k<=100;k++)
			{
				if(k==good)
				{
					arr[k]++;
				}
			}
		}
	}
	int max_count=1;
	int max_num=0;
	for(int m=1;m<=100;m++)//从100开始倒着取，取到的出现次数最多的数值，一定是最大的那一个，可以省去找最大数（35-41行）
	{
		if(arr[m]>max_count)	
		{
			max_count=arr[m];
			max_num=m;
		}
	}
	for(int t=1;t<=100;t++)
	{
		if(arr[t]==max_count&&t>max_num)	
		{
			max_num=t;
		}
	}
	printf("%d %d" ,max_num,max_count);
	
	return 0;
}