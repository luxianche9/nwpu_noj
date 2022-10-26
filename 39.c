#include <stdio.h>

int getfloor(double);

int main(void)
{
    double input;
    scanf("%lf", &input);
    printf("%d", getfloor(input));
    return 0;
}

int getfloor(double x)
{
    if ((int)x <= x)
        return (int)x;
    else
        return (int)x - 1;
}