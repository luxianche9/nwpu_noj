#include <stdio.h>

int main(void)
{
    double i = 2;
    double j = 1;
    double k;
    double element;
    double sum = 0;
    
    int n;
    for (n = 0; n < 20; n++)
    {
        element = i / j;
        sum += element;
        k = i;
        i = i + j;
        j = k;
    }
    
    printf("%.6lf", sum);
    return 0;
}