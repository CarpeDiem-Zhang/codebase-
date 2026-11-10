#include<stdio.h>
int main()
{
	int a;
	scanf("%d" ,&a);
	int num=a;
	
	int res=a*a;
	int arr[10];
	int i;
	int temp=0;
	int count=0;
	for(i=0;a>0;i++)
	{
			temp = a%10;
			arr[i]=temp;
			count++;
			a /= 10;
	}
	int b[20];
	temp=0;
	for(i=0;res>0;i++)
	{
			temp=res%10;
			b[i]=temp;
			res /= 10;
	}
	int flag=1;
	for(i=0;i<count;i++)
	{
		if(arr[i]!=b[i])
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
		printf("%d 0" ,num);
	else
		printf("%d 1" ,num);
	return 0;
}