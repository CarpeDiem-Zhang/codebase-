#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int x[40]={0};
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&x[i]);
	}
	int y[40]={0};
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			y[i]=(x[0]+x[1]+x[2])/3;	
		}
		else if(i==n-1)
		{
			y[i]=(x[i]+x[i-1]+x[i-2])/3;
		}
		else
		{
			y[i]=(x[i-1]+x[i]+x[i+1])/3;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d " ,y[i]);
	}
	return 0;
}