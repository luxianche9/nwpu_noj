#include <stdio.h>
#include <math.h>

int main(void)
{
    float r, h;
    scanf("%f %f", &r, &h);
    printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n",\
        2*M_PI*r, \
        M_PI*r*r, \
        4*M_PI*r*r, \
        4.0/3.0*M_PI*r*r*r, \
        M_PI*r*r*h);
    return 0;
}