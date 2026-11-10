#include<stdio.h>
int gcd(int a,int b)//gcd函数
{ 
	int r;
	while (b!=0)
	{
		r =a%b;
		a=b;
		b=r;
	}
	return a;
}
int main()
{	
	int x,y;
	scanf("%d%d" ,&x,&y);
	int g=gcd(x,y);
	printf("%d" ,g);
	
	return 0;
}