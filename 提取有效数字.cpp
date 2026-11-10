#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[1005];
    int cnt[101] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }

    int flag = 0,arr[100]={0};
    for (int i = 0; i < n; i++)
    {
        if (cnt[a[i]] >= 3) 
        {              
                flag = 1;
                if(arr[a[i]]==0)
                {
                	printf("%d " ,a[i]);
                	arr[a[i]]++;
				}      
        }
    }
    if (!flag)
        printf("No");
    return 0;
}