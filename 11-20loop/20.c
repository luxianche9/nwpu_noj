#include <stdio.h>
#include <math.h>

double f(double);

int main(void)
{
    double low, mid, up;
    scanf("%lf %lf", &low, &up);

    while (1)
    {
        mid = 0.5 * (low + up);
        if (f(mid) < 0)
            low = mid;
        else
            up = mid;
        if ((up - low) > -0.01 && (up - low) < 0.01)
        {
            printf("%.2lf", mid);
            break;
        }
    }
    return 0;
}

double f(double x)
{
    return 2 * pow(x, 3) - 4 * pow(x, 2) + 3 * x - 6;
}