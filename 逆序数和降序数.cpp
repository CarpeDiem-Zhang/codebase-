#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int arr[10];
	int i=0,count=0;
	
	while(n)
	{
		arr[i]=n%10;
		n /=10;
		i++;
		count++;
	}
	int sum_dx=0;
	for(i=0;i<count;i++)
	{
		sum_dx=sum_dx*10+arr[i];
	}
	int j,temp;
	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	int sum_jx=0;
	for(i=0;i<count;i++)
	{
		sum_jx=sum_jx*10+arr[i];
	}
	printf("%d" ,sum_dx+sum_jx);

	
	return 0;
}