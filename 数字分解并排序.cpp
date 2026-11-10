#include<stdio.h>
int main()
{
	int a;
	scanf("%d" ,&a);
	
	int arr[10];
	int i=0,j,temp=0;
	int count=0;
	while(a>0)
	{
		arr[i++]=a%10;
		a /=10;
		count++;
	}
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
	for(i=0;i<count;i++)
	{
		printf("%d " ,arr[i]);
	}
	return 0;
}