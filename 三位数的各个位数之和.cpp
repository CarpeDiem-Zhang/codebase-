#include<stdio.h>
int main()
{
	int a,b,s,g;
	scanf("%d" ,&a);
	
	b=a/100;
	s=(a-b*100)/10;
	g=(a-b*100-s*10);
	
	printf("%d\n" ,b+s+g);
	
	
	return 0;
}
