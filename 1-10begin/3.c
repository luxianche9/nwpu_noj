#include <stdio.h>

int main(void)
{
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    printf("%.6f\n%.6f", a+b+c, (a+b+c)/3);
    return 0;
}