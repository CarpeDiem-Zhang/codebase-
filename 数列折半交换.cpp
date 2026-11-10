#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int a[n];
	int i;
	for(i=0;i<n;i++)
		scanf("%d" ,&a[i]);
	if(n%2==1)
	{
		for(i=0;i<n/2;i++)
		{
			int temp=0;
			temp=a[i];
			a[i]=a[i+1+n/2];
			a[i+1+n/2]=temp;
		}
	}
	else
	{
		for(i=0;i<n/2;i++)
		{
			int temp=0;
			temp=a[i];
			a[i]=a[i+n/2];
			a[i+n/2]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d " ,a[i]);
	}
	return 0;
}