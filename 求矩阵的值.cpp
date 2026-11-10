#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[55][55];
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // 找全局最大值（第一个，行号列号最小）
    int max_val = a[0][0], max_r=0, max_c=0;
    int min_val = a[0][0], min_r=0, min_c=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j] > max_val)
            {
                max_val = a[i][j];
                max_r = i;
                max_c = j;
            }
            if(a[i][j] < min_val)
            {
                min_val = a[i][j];
                min_r = i;
                min_c = j;
            }
        }
    }
    printf("Max %d %d %d\n", max_val, max_r+1, max_c+1);
    printf("Min %d %d %d\n", min_val, min_r+1, min_c+1);

    // 找局部极大值：非边界 i从1~m-2，j从1~n-2
    int has_local = 0;
    printf("Local Max\n");
    for(i=1; i<=m-2; i++)
    {
        for(j=1; j<=n-2; j++)
        {
            int cur = a[i][j];
            int up = a[i-1][j];
            int down = a[i+1][j];
            int left = a[i][j-1];
            int right = a[i][j+1];
            if(cur > up && cur > down && cur > left && cur > right)
            {
                printf("%d %d %d\n", cur, i+1, j+1);
                has_local = 1;
            }
        }
    }
    if(has_local == 0)
    {
        printf("None %d %d\n", m, n);
    }
    return 0;
}
