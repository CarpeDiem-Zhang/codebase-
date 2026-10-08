#include<stdio.h>
int main(void)
{
    int week, pm, plate;
    scanf("%d %d %d", &week, &pm, &plate);
    
    int last = plate % 10;
    char res[4] = "no";

    // 不是周末才判断限行
    if (week != 6 && week != 7)
    {
        if (pm >= 200)
        {
            if (pm < 400)
            {
                // 200 ≤ pm <400，每日限2个尾号
                if (week == 1)
                {
                    if (last == 1 || last == 6)
                        sprintf(res, "yes");
                }
                else if (week == 2)
                {
                    if (last == 2 || last == 7)
                        sprintf(res, "yes");
                }
                else if (week == 3)
                {
                    if (last == 3 || last == 8)
                        sprintf(res, "yes");
                }
                else if (week == 4)
                {
                    if (last == 4 || last == 9)
                        sprintf(res, "yes");
                }
                else if (week == 5)
                {
                    if (last == 5 || last == 0)
                        sprintf(res, "yes");
                }
            }
            else
            {
                // pm >=400，限5个尾号
                if (week == 1 || week == 3 || week == 5)
                {
                    if (last % 2 == 1)
                        sprintf(res, "yes");
                }
                else if (week == 2 || week == 4)
                {
                    if (last % 2 == 0)
                        sprintf(res, "yes");
                }
            }
        }
    }

    printf("%d %s\n", last, res);
    return 0;
}
