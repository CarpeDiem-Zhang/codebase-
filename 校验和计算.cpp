#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int a,i,sum=0,temp=0;
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&a);
		while(a>0)
		{
			temp=a%10;
			a /= 10;
			sum +=temp;
		}
	}
	printf("%d" ,sum%10);
	return 0;
}