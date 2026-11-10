#include <stdio.h>

int main()
{
    int a[10][10] = {0};
    int n = 0, i, j, x;

    // 读第一行（行向量），数出 n
    while (scanf("%d", &x) == 1)
    {
        a[0][n++] = x;
        if (getchar() == '\n') break;   // 读到换行就停，确定 n
    }

    // 第二行第一个数是 C1（=H1），跳过
    scanf("%d", &x);
    // 读 C2 ~ Cn 到第一列
    for (i = 1; i < n; i++)
        scanf("%d", &a[i][0]);

    // 托普利兹：每个元素 = 左上角元素
    for (i = 1; i < n; i++)
        for (j = 1; j < n; j++)
            a[i][j] = a[i - 1][j - 1];

    // 输出矩阵
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
            if (j < n - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
