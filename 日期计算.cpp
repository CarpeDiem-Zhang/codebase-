#include<stdio.h>
int main()
{
	int y,d;
	scanf("%d%d" ,&y,&d);
	
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if((y%4==0&&y%100!=0)||y%400==0)
	{
		month[2]=29;
	}
	int i;
	for(i=1;i<=12;i++)
	{
		if(d>month[i])
		{
			d -=month[i];
		}
		else
			break;
	}
	printf("%d %d" ,i,d);
	return 0;
}