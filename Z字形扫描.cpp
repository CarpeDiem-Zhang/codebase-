#include <stdio.h>//同一个'/'型线上的数字坐标i+j相同
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // 斜线上 i+j 相等，s=i+j
    for(int s = 0; s <= 2*n-2; s++)
    {
        if(s % 2 == 0)
        {
            // 偶数和：左下往右上 i递减,j递增
            for(int i = s; i >= 0; i--)
            {
                int j = s - i;
                if(i < n && j < n)
                    printf("%d ", a[i][j]);
            }
        }
        else
        {
            // 奇数和：右上往右下 i递增,j递减
            for(int i = 0; i <= s; i++)
            {
                int j = s - i;
                if(i < n && j < n)
                    printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
}
