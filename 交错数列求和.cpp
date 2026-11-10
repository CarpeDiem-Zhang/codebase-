#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	double sum=0,temp;
	for(double i=1;i<=n;i++)
	{
		temp =(pow(-1,i+1))*(i/(2*i-1));
		sum +=temp;
	}
	printf("%.3f" ,sum);
	return 0;
}