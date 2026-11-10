#include<stdio.h>
int main()
{
	int a,b,min;
	scanf("%d%d" ,&a,&b);
	
	if(a==0&&b!=0)
	{
		printf("%d" ,b);
	}
		
	else if(b==0&&a!=0)
	{
		printf("%d" ,a);
	}
		
	
	if(a!=0&&b!=0&&a<b)
		min =a;
	else
		min =b;
	
	int i;
	for(i=min;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		{
			printf("%d" ,i);
			break;
		}
	}

	return 0;
}