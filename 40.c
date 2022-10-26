#include <stdio.h>

double integrate(double a, double b);
double f(double);

int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.6lf", integrate(a, b));
    return 0;
}

double integrate(double a, double b)
{
    double x;
    double h = 0.000001;
    double integrate_a_b = 0;
    
    for (x = a; x < b; x += h)
    {
        integrate_a_b += h / 2 * (f(x) + f(x + h));
    }
    
    return integrate_a_b;
}

double f(double x)
{
    return 1 / (1 + x * x);
}