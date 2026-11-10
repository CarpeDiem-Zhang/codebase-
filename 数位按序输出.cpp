#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int arr[100], i=0,count=0;

	int j,temp;
	while(n)
	{
		temp=n%10;
		arr[i]=temp;
		i++;
		n /= 10;
		count++;
	}
	
	temp=0;
	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<count;i++)
		printf("%d " ,arr[i]);
	return 0;
}
