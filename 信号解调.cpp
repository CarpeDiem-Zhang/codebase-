#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int x,y;
	int long_1,long_2;
	for(int i=0;i<n;i++)
	{
		scanf("%d%d" ,&x,&y);
		long_1=(x-4)*(x-4)+(y-4)*(y-4);
		long_2=(x+4)*(x+4)+(y+4)*(y+4);
		if(long_1<long_2)
			printf("1 ");
		else
			printf("2 ");
	}
	return 0;
}