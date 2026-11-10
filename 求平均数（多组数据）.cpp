#include<stdio.h>
int main() 
{	
	int count=0;
	double sum=0,number;
	char _sign_;
	
	printf("请输入数据(带有+/-，最后空格'='):\n"); 
	do
	{	scanf(" %c" ,&_sign_);
		if(_sign_ == '=')
	{
			break;
	}	
		scanf("%lf" ,&number);
		count ++;
		if(_sign_ =='-')
		{
			number = -number;
		}
		sum += number;
		
	}while(1);
		printf("平均值=%lf" ,sum/(1.0*count));
	
	return 0;	
}
