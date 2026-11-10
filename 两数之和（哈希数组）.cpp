#include <stdio.h>
#define MAXN 20000
int hash[MAXN];
int main()
{
    int n;
    scanf("%d", &n);

    int num[1000];
    for (int i=0;i<n;i++)
    {
		hash[i]=-1;
	}
	for ( int i = 0; i < n; i++)

    {
        scanf("%d", &num[i]);
        hash[num[i]] = i;//hash
    }
	int target;
    scanf("%d", &target);
	for (int i = 0; i < n; i++)
    {
        int need=target-num[i];
        
        if (need >= 0 && need < MAXN && hash[need] != i)
        {
            int x = i;
            int y = hash[need];
            if (x > y)
            {
                int temp = x;
                x = y;
                y = temp;
            }
            printf("%d %d\n", x, y);
            break;
        }
    }
    return 0;
}