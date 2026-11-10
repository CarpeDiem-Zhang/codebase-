#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d" ,&m,&n);
	
	int a=(m*(m+1))/2;
	int b=(n*(n+1))/2;
	
	printf("%d" ,a*b);
	return 0;
}