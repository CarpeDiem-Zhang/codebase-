#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int i;
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int temp=sum/n;
	int res=0;
	for(i=0;i<n;i++)
	{
		res+=pow(abs(arr[i]-temp),2);
	}
	int X=res/n;
	printf("%d" ,X);
	return 0;
}