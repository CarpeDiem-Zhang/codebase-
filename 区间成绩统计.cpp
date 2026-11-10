#include<stdio.h>
int main()
{
	int N,A,B;
	scanf("%d%d%d" ,&N,&A,&B);
	
	int x,count=0;
	for(int i=1;i<=N;i++)
	{
		scanf("%d" ,&x);		
		if(x>=A&&x<=B)
		{
			count++;
		}		
	}
	printf("%d" ,count);
	return 0;
}