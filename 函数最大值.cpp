/*#include<stdio.h>
#define MAX 10000
int main()
{
	double a;
	scanf("%lf" ,&a);
	
	double arr[MAX];
	double x=0;
	
	int i;
	for(i=0;i<MAX;i++)
	{
		double y=-x*x*x+a*x*x;
		arr[i]=y;
		x += 0.0001;
	}
	double max=arr[0];
	for(i=0;i<MAX;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("%.2lf" ,max);
	
	return 0;
}*/
#include<stdio.h>
#define MAX 100000
int main()
{
    double a;
    scanf("%lf",&a);
    double x = 0.0;
    double max_val = -1e9;
    int i;
    for(i = 0; i <= MAX; i++)
    {
        double y = -x*x*x + a * x * x;
        if(y > max_val)
        {
            max_val = y;
        }
        x += 0.0001;
    }
    printf("%.2lf", max_val);
    return 0;
}
