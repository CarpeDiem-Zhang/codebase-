#include<stdio.h>
#include<math.h>
int main()
{
	int n,next,max=0;
	scanf("%d" ,&n);
	
	int temp;
	scanf("%d", &temp);
	for(int i=2;i<=n-1;i++)//第一个数以读取，剩余从第二个数开始取
	{
		scanf("%d" ,&next);
		if(abs(next-temp)>=max)
		{
			max=abs(next-temp);
		}
		temp=next;
	}
	printf("%d" ,max);
		
	return 0;
}