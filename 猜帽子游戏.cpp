#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int arr[n];
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&arr[i]);
	}
	int g_c;
	scanf("%d" ,&g_c);
	int guess[n];
	int j,count[g_c];
	int k=1;
	int flag[g_c];
	for(k=0;k<g_c;k++)
	{	
	    i=0;
	    count[k]=0;
		for(j=0;j<n;j++)
		{
			scanf("%d" ,&guess[j]);
			if(guess[j]==0)
			count[k]++;
		}
		while(i<n)
		{
			if(arr[i]==guess[i]||guess[i]==0)
				{
					flag[k]=1;
				}
			else if(arr[i]!=guess[i]&&guess[i]!=0)
				{
					flag[k]=0;
					break;
				}
			i++;
		}
	}
	for(k=0;k<g_c;k++)
	{
		if(flag[k]==1&&count[k]!=n)
			printf("Da Jiang!!!\n");
		else if(flag[k]==0||count[k]==n)
			printf("Ai Ya\n");
	}
	return 0;
}