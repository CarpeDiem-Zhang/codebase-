#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d" ,&n);
	double a;
	for (double i=1;i<=n;i++)
	{
		scanf("%lf" ,&a);
		sum +=a;
	}
	printf("%.2f\n" ,sum/(1.0*n));
	return 0;
}