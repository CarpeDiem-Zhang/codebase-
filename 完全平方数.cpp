#include<stdio.h>
#include<math.h>
int main()
{
	int n,m=1;
	int flag=0;//利用flag==0或1来判断是否找到目标值
	scanf("%d" ,&n);
	
	if(n==0)
	{
		printf("0");
	}
	if(n!=0)
	{
		while(m*m<=n)
	{	
		if(m*m==n)
		{
			printf("%d" ,m);
			flag=1;
			break;
		}
		m++;
	}
	if(flag==0)
		printf("no");
	}
	return 0;
}
