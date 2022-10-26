#include <stdio.h>

int factorial(int);
int combination(int, int);

int main(void)
{
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", combination(n, r));
    return 0;
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int combination(int n, int r)
{
    return factorial(n) / factorial(r) / factorial(n - r);
}