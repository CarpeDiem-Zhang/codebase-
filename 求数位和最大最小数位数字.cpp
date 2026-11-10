#include<stdio.h>
int main()
{
	int a,temp;
	scanf("%d" ,&a);
	
	int count=0;
	int max=0,min=9;
	
	if(a==0)
	{
		printf("1 0 0");
	}
	else
	{
		for(;a>0;count++)
		{
			temp =a%10;
			if(temp>max)
			{
				max=temp;
			}
			if(temp<min)
			{
			min=temp;
			}
			a /=10;
		}
			printf("%d %d %d" ,count,max,min);
	
	}
	
	
	return 0;
}