#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	if(n==1)
	{
		printf("1");
	}
	
	else
	{
		for(int i=2;i<=n;i++)
		{
			while(n%i==0)
			{
				printf("%d" ,i);
				n =n/i;
				if(n!=1)
				{
					printf("*");				
				}			
			}		
		}
	
	}
	return 0;
}