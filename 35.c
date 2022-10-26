#include <stdio.h>

int getbit(int, int);

int main(void)
{
    int num, n;
    scanf("%d %d", &num, &n);
    printf("%d", getbit(num, n));
    return 0;
}

int getbit(int num, int n)
{
    return ((0x1 << (n - 1)) & num) >> (n - 1);
}