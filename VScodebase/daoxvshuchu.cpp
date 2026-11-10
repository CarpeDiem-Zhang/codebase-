#include<stdio.h>
int main()
{
	int a,temp,result=0;
	scanf("%d" ,&a);
	
	while(a!=0)
	{
		temp = a%10;
		result = temp+result*10;//本轮加上前一轮数字×10
		a /= 10;	
	}
		printf("%d" ,result);
		
	return 0;
}
