#include <stdio.h>

int main(void)
{
    int a;
    int b = 0;
    scanf("%d", &a);
    int c = a;
    while (a != 0)
    {
        b *= 10;
        b += a%10;
        a /= 10;
    }
    if (b != c)
        printf("no");
    else
        printf("yes");
    return 0;
}