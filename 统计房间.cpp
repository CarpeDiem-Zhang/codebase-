#include<stdio.h>
int main()//利用两个数组，对数据进行双侧判断
{
	int n,a;
	scanf("%d%d" ,&n,&a); 
	
	int in[100]={0},out[100]={0};
	int i;
	for(i=0;i<a;i++)
	{
		int l,r;
		scanf("%d%d" ,&l,&r);
		out[l]++;
		in[r]++;
	}
	int flag=0;
	for(i=1;i<=n;i++)
	{
		if(in[i]>0&&out[i]==0)
		{
			printf("%d\n" ,i);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("0");
	}
	return 0;
}