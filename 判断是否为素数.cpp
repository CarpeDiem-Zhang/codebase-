#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	if(n<2)
	{
		printf("no");
		return 0;
	}
	
	int flag=1;
	for(int i=2;i<=sqrt(n);i++)
	{	
		int flag=1;
		if(n%i ==0)
		{
			flag=0;
			break;
		}
		if(n%i !=0)
		{
			flag=1;
		}
	}
	switch(flag)
	{
		case 1:printf("yes");break;
		case 0:printf("no");break;
	}
	return 0;
}