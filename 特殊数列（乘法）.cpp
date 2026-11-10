#include<stdio.h>
int main()
{
	int a,b,n;
	scanf("%d%d%d" ,&a,&b,&n);
	
	int arr[n];
	arr[0]=a;
	arr[1]=b;
	int len=2;
	int i=0;
	while(len<n)
	{
		/*int mul=arr[len-2]*arr[len-1];*/ //每次取数列最后两项
		int mul=arr[i]*arr[i+1];
		i++;//从0———i依次取，不是每次取数列最后两项
		if(mul==0)
		{
			arr[len++]=0;
		}
		else if(mul<10)
		{
			arr[len++]=mul;
		}
		else
		{
			int temp[10];
			int j=0,k=0;
			while(mul>0)
			{
				temp[j++]=mul%10;
				mul /=10;		
			}
			for(int k=j-1;k>=0;k--)
			{
				arr[len++]=temp[k];
				if(len>=n)break;
			}
		}
	}
	for(i=0;i<n;i++)
		{
			printf("%d " ,arr[i]);
		}

	return 0;
}