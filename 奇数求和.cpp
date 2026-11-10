#include<stdio.h>
int main()
{
	int a;
	int sum=0;
	
	while(a!=0)
	{	
		scanf("%d" ,&a);
		if(a%2==0&&a!=0)
		{
			continue;
		}
		else if(a%2!=0)
		{
			sum +=a;
		}
		
	}
	printf("%d" ,sum);
	
	return 0;
}