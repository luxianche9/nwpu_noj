#include <stdio.h>

int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    int i;
    double sum;
    for (i = m; i <= n; i++)
    {
        sum += 1/(((double) i) * ((double) i));
    }
    printf("%.5lf", sum);
    return 0;
}