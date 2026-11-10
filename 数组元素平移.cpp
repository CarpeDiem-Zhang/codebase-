#include<stdio.h>
int main()
{
	int arr[10] ={1,2,3,4,5,6,7,8,9,10};
	int p,i;
	scanf("%d" ,&p);
	
	for(i=p+1;i<10;i++)
	{
		printf("%d " ,arr[i]);
	}
	for(i=0;i<=p;i++)
	{
		printf("%d " ,arr[i]);
	}
		return 0;
}