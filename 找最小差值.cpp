#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	int arr[n];
	int i,j;
	for(i =0;i<n;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	int min=abs(arr[0]-arr[1]);
	int temp=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(j!=i)
			{
				temp = abs(arr[i]-arr[j]);
				if(temp<=min)
				{
					min =temp;
				}
			}
			
		}
	}
	printf("%d" ,min);
	return 0;
}