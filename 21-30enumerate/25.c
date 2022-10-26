#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int cnt;

    int century = 1;
    int year;

    int i, j;

    //优化使用
    int sqrt_year;
    int century_max;
    //找到第n个合数世纪
    for (cnt = 0; cnt < n; cnt++)
    {
        for (;; century++)
        {
            //year有三个公因子直接下一年
            century_max = (century + 1) * 100;
            for (year = century * 100; year < century_max; year++)
            {
                sqrt_year = (int)sqrt(year);
                for (j = 2; j <= sqrt_year; j++)
                {
                    if ((year / j) * j == year)
                        goto next_year;
                }
                //year是素数直接跳出到下一世纪
                goto next_century;
                next_year:
            }
            goto next_no_prime_year;
            next_century:
        }
        next_no_prime_year:
    }
    printf("%d %d", century * 100, century * 100 + 99);
    return 0;
}