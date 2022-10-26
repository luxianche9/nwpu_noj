#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    double input;
    double sum = 0;
    double sqr_sum = 0;

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &input);
        sum += input;
        sqr_sum += input * input;
    }

    printf("%.6lf", sqr_sum - n * (sum / n) * (sum / n));
    return 0;
}