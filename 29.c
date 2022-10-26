#include <stdio.h>

int main(void)
{
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) == 3)
    {
        if (a == 0 && b == 0 && c == 0)
            return 0;
        int integer = a / b;
        printf("%d.", integer);

        a %= b;
        int i = 1;
        while (i++ < c)
        {
            a *= 10;
            printf("%d", a / b);
            a %= b;
        }
        a *= 10;
        printf("%d", ((a % b) * 10 / b > 5) ? (a / b + 1) : (a / b));
    }
    return 0;
}