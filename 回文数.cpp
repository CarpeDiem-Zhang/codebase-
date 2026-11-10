#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	int temp =n;
	int a[10];
	int i=0;
	int count =0;
	while(n)
	{
		a[i]=n%10;
		n /=10;
		i++;
		count ++;
	}//循环结束后i变为5，但下标是4
	int res =0;
	int j=0;//后面的求和循环用到j，要将其定义到循环外
	for(;j<i;j++)//j取到4时全部数据均已访问
	{
		res = res*10+a[j];
	}
	int sum = 0;
	if(res == temp)
	{
		for(int k=0;k<j;k++)
		{
			sum +=a[k];
		}
		printf("%d" ,sum);
	}
	else
	{
		printf("no");
	}
	return 0;
}