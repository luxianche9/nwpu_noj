#include <stdio.h>

int main(void)
{
    float profit;
    float prize;
    scanf("%f", &profit);
    
    if (profit <= 10)
        prize = profit * 0.1;
    else if (profit > 10 && profit <= 20)
        prize = 10 * 0.1 + (profit - 10) * 0.075;
    else if (profit > 20 && profit <= 40)
        prize = 10 * 0.1 + 10 * 0.075 + (profit - 20) * 0.05;
    else if (profit > 40 && profit <= 60)
        prize = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (profit - 40) * 0.03;
    else if (profit > 60 && profit <= 100)
        prize = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (profit - 60) * 0.015;
    else if (profit > 100)
        prize = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (profit - 100) * 0.01;

    printf("%.6f", prize);
    return 0;
}