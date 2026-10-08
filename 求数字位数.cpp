#include<stdio.h>
int main()
{	int a,w_s;
	scanf("%d" ,&a);
	
	if(a==0)
		printf("1");
	
	else
	{
		while(a>0)
		{
			a =a/10;
			w_s++;
		}
			printf("%d" ,w_s); 
	}
	
	return 0;
}
