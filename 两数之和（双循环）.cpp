#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nums[1000];
    // 读入数组
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int target;
    scanf("%d", &target);

    // 双重循环
    for (int i = 0; i < n; i++)
    {
        // j从i+1开始，保证j永远在i后面，输出一定i在前、j在后
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("%d %d\n", i, j);
                return 0; // 找到答案直接结束程序
            }
        }
    }
    return 0;
}
