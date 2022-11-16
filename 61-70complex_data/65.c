#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    char binary_inverse[100];
    int i = 0;

    while (input != 0)
    {
        binary_inverse[i++] = input % 2 + '0';
        input /= 2;
    }


    while (i >= 0)
    {
        putchar(binary_inverse[--i]);
    }
    return 0;
}