#include<stdio.h>
int main()
{
	int a,b,max,min,c,d;
	scanf("%d%d" ,&a,&b);
	
	max = a>b? a:b;
	min = a<b? a:b;
	
	c=max%10;
	d=min*min;
	
	printf("%d %d\n" ,c,d); 
		
	return 0;
}
