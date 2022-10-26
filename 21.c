#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int n;
    for (n = 10; n <= 100; n++)
    {
        if (n % 3 == a && n % 5 == b && n % 7 == c)
        {
            printf("%d", n);
            return 0;
        }
    }
    printf("%d", -1);
    return 0;
}