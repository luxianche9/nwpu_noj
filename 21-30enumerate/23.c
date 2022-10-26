#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int low = 0, up = 0;
    int n;
    double deno, sum;
    for (n = 1, sum = 0, deno = 0;; n++)
    {
        deno += 1/(double)n;
        sum += 1/deno;
        if (sum > a && low == 0)
            low = n;
        if (sum > b)
        {
            up = n - 1;
            break;
        }
    }

    if (low == up)
        printf("%d", low);
    else
        printf("%d %d", low, up);
    return 0;
}