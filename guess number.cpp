#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int n =rand()%100+1;
    int count=0;
    int guess;

    printf("开始猜测一个1到100之间的数字\n");
    do
    {   
        printf("输入你猜测的数字：");
        scanf("%d" ,&guess);
        count++;
        if(guess<n)
        	printf("你猜的数字小了");
		else if(guess>n)
			printf("你猜的数字大了");
			 
	} while(guess!=n);
		printf("恭喜你猜对了！共用%d次" ,count);
			
	return 0;
}
