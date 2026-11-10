#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	int cnt=0;
	for(i=0;i<n-2;i++)
	{
		if(arr[i]==3&&arr[i+1]==5&&arr[i+2]==7)
		{
			cnt++;
		}
	}
	printf("%d" ,cnt);
	return 0;
}