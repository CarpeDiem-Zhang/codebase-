#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double x;
	scanf("%d%lf" ,&n,&x);
	
	double arr[2*n];
	int j;
	for(j=2*n;j>=1;j--)
	{
		double res=1;
		double a=j*1.0;
		while(a>0)
		{
			res *=a;
			a--;
		}
		arr[j]=res;
	}
	int i;
	double temp=0;
	for(i=1;i<=n;i++)
	{
		temp += pow(-1,i+1.0)/*i%2==1?1:-1*/*((pow(x,2*i-1.0))/arr[2*i-1]);
	}
	printf("%.4lf" ,temp);
	return 0;
}