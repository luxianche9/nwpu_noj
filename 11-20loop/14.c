#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    double x = 1;
    double next_x;
    
    while (1)
    {
        next_x = 0.5*(x + a / x);
        if ((x > next_x ? x - next_x : next_x -x) < 0.00001)
        { 
            printf("%.5lf", next_x);
            break;
        }
        x = next_x;
    }
    return 0;
}