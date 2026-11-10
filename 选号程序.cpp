#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	int sum_1=0,num_1,initial_1;
	scanf("%d" ,&num_1);
	initial_1=num_1;
	
	int temp_1=0;
	do
		{
			temp_1=num_1%10;
			sum_1 +=temp_1;
			num_1 /=10;	
		}while(num_1>0);
	num_1=initial_1;
	int max=sum_1;//处理第一个号码，得到后续循环判断的初始比较条件
	int num,temp=0,sum=0,initial,choose=num_1;
	for(int i=2;i<=n;i++)
	{
		scanf("%d" ,&num);
		initial=num;
		do
		{
			temp=num%10;
			sum +=temp;
			num/=10;	
		}while(num>0);
		if(sum>max)
		{
			choose=initial;
			max=sum;
		}
		else if(sum==max)
		{
			choose=(choose>initial)?choose:initial;
		}
		
		sum=0;
	}
	printf("%d" ,choose);
	return 0;
}