#include <stdio.h>

int main(void)
{
    float distanc_float;
    scanf("%f", &distanc_float);
    int distanc_int = (int)(distanc_float + 1);
    float fee;
    
    if (distanc_int <= 2)
        fee = 7;
    else if (distanc_int > 2 && distanc_int <= 15)
        fee = 7 + (distanc_int - 2) * 1.5;
    else if (distanc_int > 15)
        fee = 7 + 13 * 1.5 + (distanc_int - 15) * 2.1;

    printf("%.6f", fee);

    return 0;
}