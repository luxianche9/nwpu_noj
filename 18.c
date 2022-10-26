#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int sum;
    for (n = 1; n <= 1000; n++)
    {
        sum = 0;
        for (i = 1; i <= n / 2; i++)
        {
            //公因数判断
            if ((n / i) * i == n)
            {
                sum += i;
            }
        }
        //满足完全数定义
        if (sum == n)
        {
            printf("%d=1", n);
            for (i = 2; i <= n / 2; i++)
            {
                if ((n / i) * i == n)
                {
                    printf("+%d", i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}