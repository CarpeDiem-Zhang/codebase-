#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d" ,&a,&b);
	
	int cnt_3=0,cnt_4=0,cnt_5=0;
	int i,j;
	if(b>a)
	{
		for(i=a;i<=b;i++)
		{
			if(i%3==0)
			{
				cnt_3++;
			}
			if(i%4==0)
			{
				cnt_4++;
			}
			if(i%5==0&&i%2!=0)
			{
				cnt_5++;
			}
		}
	}
	if(a>b)
	{
		for(i=b;i<=a;i++)
		{
			if(i%3==0)
			{
				cnt_3++;
			}
			if(i%4==0)
			{
				cnt_4++;
			}
			if(i%5==0&&i%2!=0)
			{
				cnt_5++;
			}
		}
	}
	int arr[3];
	arr[0]=cnt_3;
	arr[1]=cnt_4;
	arr[2]=cnt_5;
	int max=arr[0]%arr[1];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			int temp=arr[i]%arr[j];
			if(temp>max)
			{
				max=temp;
			}
		}
	}
	for(i=2;i>0;i--)
	{
		for(j=2;j>0;j--)
		{
			int temp=arr[i]%arr[j];
			if(temp>max)
			{
				max=temp;
			}
		}
	}
	printf("%d %d %d\n%d" ,cnt_3,cnt_4,cnt_5,max);
	return 0;
}