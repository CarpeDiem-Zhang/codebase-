//版本1
#include<stdio.h>									
int main ()
{   
    int a,score=0,temp,temp_1=1,temp_2=2;
    scanf("%d" ,&a);
        
	if(a==0)
        {
            temp =0;
        }
    else if(a!=0)
        {
            do
            {
                if(a==1)
                {
                    temp=temp_1;
                    score +=temp;
                    scanf("%d" ,&a);
                }
            	
				if(a==2)
                {
                    while(a==2)
                    {
                    	temp=temp_2;
                    	score +=temp;
                    	temp_2 +=2;
                    	scanf("%d" ,&a);
					}
					temp_2=2;
				}
            if(a==0)
           		 break;
            
            } while(1);
            
        }
        printf("%d" ,score);

    return 0;
}

//修改版
/*#include<stdio.h>
int main ()
{   
    int a,score=0,temp,temp_1=1,temp_2=2;
    scanf("%d" ,&a);
    
    if(a==0)
        {
            temp =0;
        }
    else if(a!=0)
        {
            do
            {
                if(a==1)
                {
                    temp=temp_1;
                    score +=temp;
                    scanf("%d" ,&a);
                }
                while(a==2)
                {
                    temp=temp_2;
                    score +=temp;
                    temp_2 +=2;
                    scanf("%d" ,&a);
                }
                temp_2=2;
            
            } while(a!=0);
            
        }
        printf("%d" ,score);
    

    return 0;
}

//豆包版
/*#include <stdio.h>

int main()
{
    int a, score = 0, seq = 2;   // seq: 连续 2 应计的分数，从 2 开始递增
    scanf("%d", &a);

    while (a != 0)               // 用 while 替代 do-while + if 判断
    {
        if (a == 1)              // 遇 1：记 1 分
        {
            score += 1;
            scanf("%d", &a);
        }
        else if (a == 2)         // 遇 2：按 2、4、6… 累加
        {
            score += seq;
            seq += 2;
            scanf("%d", &a);
            if (a != 2)          // 这一组连续 2 结束，重置计分
                seq = 2;
        }
    }

    printf("%d\n", score);
    return 0;
}