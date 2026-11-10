#include<stdio.h>
int main()
{
   int max;
   scanf("%d" ,&max);

   int i,j;
   int sum=0;
   int count=0;
   for(i=2;i<=max;i++)
   {    
        int flag=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            sum +=i;
            if(sum>max)
            {
                break;
            }
            count++;
        }
        if(flag==1)
        {
            printf("%d\n" ,i);
        }
    }
    printf("%d" ,count);
    return 0;

}