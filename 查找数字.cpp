#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d%d" ,&n,&k);
	int a[100] ={0};
	int i = 0;
	int flag = 0;
	for(;i<n;i++)
	{
		scanf("%d" ,&a[i]);
		if(k==a[i])
		{
			printf("%d " ,i);
			flag = 1;
		}
	}
	if(flag == 0)
	{
		printf("-1");
	}
	
	return 0;
}