#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int i;
	double arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%lf" ,&arr[i]);
	}
	double max=arr[1]-arr[0];
	double min=arr[1]-arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]-arr[i-1]>max)
		{
			max=arr[i]-arr[i-1];
		}
		if(arr[i]-arr[i-1]<min)
		{
			min=arr[i]-arr[i-1];
		}
	}
	printf("%.2lf %.2lf" ,max,min);
	return 0;
}