#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned int n;
    scanf("%u", &n);
    unsigned int mask = 7;
    unsigned int i, j;
    int cnt = 0;

    for (i = 0; i <= pow(2, n); i++)
    {
        for (j = 0; j <= n - 3; j++)
        {
            if (((i >> j) & mask) == mask)
            {
                cnt++;
                break;
            }
        }
    }

    printf("%d", cnt);
    return 0;
}