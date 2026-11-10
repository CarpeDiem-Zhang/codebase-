#include<stdio.h>
#include<math.h>
int main()
{
	int n,min,max;
	scanf("%d" ,&n);
	
	int temp_min=1,temp_max=1;
	
	for(min=2;min<=(n/2);min++)
	{	
		int flag=1;
		for(int i=2;i<=sqrt(min);i++)//找出小的质数
		{
			if(min%i==0)
			{
				flag=0;
				break;	
			}
			if(min%i!=0)
			{
				flag=1;
			}
		}	
		if(flag==1)
		{
			temp_min=min;
			max =n-temp_min;
			for(int j=2;j<=sqrt(max);j++)//找出大的数，并判断是否为质数
			{
				if(max%j==0)
				{
					flag=0;
					break;	
				}
				if(max%j!=0)
				{
					flag=1;
				}
			}
			if(flag==1)
			{
				temp_max=max;
				printf("%d %d" ,temp_min,temp_max);
				break;
			}
		}
	}
	return 0;
}