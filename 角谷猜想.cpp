#include<stdio.h>
int main()
{
	int n;
	scanf("%d" ,&n);
	
	int count=0;
	while(n!=1)
	{
		if(n%2==0)
		{
			n /=2;
			count ++;
		}
		if(n%2!=0&&n!=1)
		{
			n =3*n+1;
			count ++;
		}
	}
	printf("%d" ,count);
	return 0;
}