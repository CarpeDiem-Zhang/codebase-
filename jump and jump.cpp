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