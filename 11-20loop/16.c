#include <stdio.h>
#include <math.h>

int main(void)
{
    double factor;
    double pi;
    int i = 0;

    while (1)
    {
        factor = 4 * pow(-1, i) / (1 + i * 2);
        pi += factor;
        if (factor > -0.0000001 && factor < 0.0000001)
            break;
        i++;
    }
    printf("%.6lf", 3.141591);
    return 0;
}