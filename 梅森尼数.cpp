#include <stdio.h>
#include <math.h>

// 判断素数
int isPrime(int x)
{
    if(x < 2) return 0;
    for(int i = 2; i <= sqrt(x); i++)
    {
        if(x % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int m = (1 << n) - 1;  // 2^n -1
    int flag = isPrime(m);
    printf("%d %d\n", m, flag);
    return 0;
}