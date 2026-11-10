#include<stdio.h>
//panduanshifoutiaoguo
int skip(int x)
{
	if(x%7==0)
	return 1;
	while(x)
	{
		if(x%10==7)
			return 1;
		x /=10;
	}
	return 0;
}
int main ()
{
	int n;
	scanf("%d" ,&n);
	int count_t=0;
	int count_a=0,count_b=0,count_c=0;
	int temp =1;
	int people =0;
	
	while(count_t<n)
	{
		if(skip(temp))
		{
			switch(people)
			{
				case 0:count_a++;break;
				case 1:count_b++;break;
				case 2:count_c++;break;
			}
			people = (people+1)%3;
			temp ++;
		}
		else
		{
			count_t ++;
			people =(people+1)%3;
			temp ++;
		}
	}
	printf("%d %d %d" ,count_a,count_b,count_c);
	
	return 0;
}