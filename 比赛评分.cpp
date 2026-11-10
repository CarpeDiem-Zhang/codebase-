#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d" ,&n,&m);
	
	float sum=0;
	float s[n];
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%f" ,&s[i]);	
		sum+=s[i];
	}
	float max=s[1];
	float min=s[1];
	for(i=1;i<=n;i++)
	{
		if(s[i]>max)max=s[i];
		if(s[i]<min)min=s[i];
	}
	int flag=1;
	if(max==s[m]||min==s[m])
	{
		if(max==s[m])
		{
			sum-=min;
			flag=0;
		}
		else if(min==s[m])
		{
			sum-=max;
			flag=0;
		}
	}
	else
	{
		sum=sum-min-max;
		flag=1;
	}
	if(flag==0)
	printf("%.2f" ,sum/(n-1.0));
	else
	printf("%.2f" ,sum/(n-2.0));
	return 0;
}