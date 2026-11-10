#include<stdio.h>
#define MAXN 2000
// 删掉hash数组，换成val和idx并行数组
int val[101];
int idx[101];
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%d" ,&val[i]);
		idx[i] = i; // 记录原始下标
	}
	int j;
	// 冒泡排序，val和idx同步交换
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-1-i;j++)
		{
			if(val[j]>val[j+1])
			{
				// 值交换
				int temp=val[j];
				val[j]=val[j+1];
				val[j+1]=temp;
				// 下标跟着一起交换！
				int t2 = idx[j];
				idx[j] = idx[j+1];
				idx[j+1] = t2;
			}
		}
	}
	int flag=1;
	int d=val[2]-val[1];
	for(i=2;i<=n-1;i++)
	{
		if(val[i+1]-val[i]!=d)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		for(i=1;i<=n;i++)
		{
			if(i>1) printf(" ");
			printf("%d" ,idx[i]);
		}
	}
	if(flag==0)
	{
		int max_gap = -999999;
		int min_gap = 999999;
		// 只算相邻差值！！题目要求
		for(i=2;i<=n;i++)
		{
			int gap = val[i] - val[i-1];
			if(gap>max_gap) max_gap=gap;
			if(gap<min_gap) min_gap=gap;
		}
		printf("%d %d" ,max_gap,min_gap);
	}
	return 0;
}