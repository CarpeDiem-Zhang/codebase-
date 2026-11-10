#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int a[1000] ={0};
	int i =0;
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&a[i]);
	}
	int count =1;
	for(int j=0;j<i-1;j++)
	{
		
		if(a[j]!=a[j+1])
		{
			count ++;
		}
	}
	printf("%d" ,count);

	return 0;
}