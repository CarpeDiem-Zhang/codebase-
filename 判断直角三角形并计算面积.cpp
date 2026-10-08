#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        printf("不是三角形");
    }
    else
    {
    
        int aa = a * a;
        int bb = b * b;
        int cc = c * c;
        if (aa + bb == cc || aa + cc == bb || bb + cc == aa)
        {
            double s;
            if(aa + bb == cc)
                s=  1.0 *a * b / 2;
            else if(aa + cc == bb)
                s = 1.0* a * c / 2;
            else
                s =  1.0*b * c / 2;
            printf("%g", s);
        }
        else
        {
            printf("其他三角形");
        }
    }
    return 0;
}

