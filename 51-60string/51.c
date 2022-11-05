#include <stdio.h>

int main(void)
{
    int a[100];
    int i = 0;
    int num = 0;
    int c;
    int in_num = 0;
    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
        {
            num = num * 10 + (c - '0');
            in_num = 1;
        }
        else if (in_num)
        {
            a[i++] = num;
            num = 0;
            in_num = 0;
        }
    }
    if (in_num)
        a[i++] = num;

    printf("%d\n", i);
    for (int j = 0; j < i; j++)
    {
        printf("%d", a[j]);
        if (j != i - 1)
            printf(" ");
    }
    return 0;
}