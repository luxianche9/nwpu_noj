#include <stdio.h>

int main(void)
{
    int n, i;
    int cnt = 0;
    int sum = 0;
    int odd = 1;
    int factor = 2;

    for (n = 500; n <= 800; n++)
    {
        for (i = 2; i < n / 2; i++)
            if ((n / i) * i == n)
                factor++;
        if (factor == 2)
        {
            cnt++;
            if (odd)
            {
                sum += n;
                odd = 0;
            }
            else
            {
                sum -= n;
                odd = 1;
            }
            
        }
        factor = 2;
    }

    printf("%d %d", cnt, -1*sum);
    return 0;
}