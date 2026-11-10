#include<stdio.h>
int main ()
{
	double n,a_n=0,s_n =0,k;
	scanf("%lf" ,&n);
	
	for(k=1;k<=n;k++)
	{
		a_n =1+(1/k);
		s_n += a_n;
	}
	printf("%.1lf" ,s_n);
	

	return 0;
}