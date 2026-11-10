#include<stdio.h>
int main()
{
	int n,temp,sum=0;
	scanf("%d" ,&n);
	
	for(;n>0;)
	{
		temp =n%10;
		sum +=temp;
		n /=10;
	}
	printf ("%d" ,sum);
	return 0;
}

