#include <stdio.h>
#include <stdlib.h>

int factorial(int);
void arrange(int, int);
int fit_scale(int);

int *number_list;
int remain[9] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
int cnt = 0;

int main(void)
{
    number_list = malloc(sizeof(int) * factorial(9));
    arrange(9, 0);

    int i;
    int num;
    for (i = 0; i < factorial(9); i++)
    {
        num = number_list[i];
        if (fit_scale(num))
            printf("%d %d %d\n", num / 1000000, num / 1000 % 1000, num % 1000);
    }

    return 0;
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return factorial(n - 1) * n;
}

void arrange(int n, int num)
{
    if (n == 0)
    {
        number_list[cnt++] = num;
    }
    else
    {
        int i;
        for (i = 1; i <= 9; i++)
        {
            if (remain[i - 1])
            {
                remain[i - 1] = 0;
                arrange(n - 1, num * 10 + i);
                remain[i - 1] = 1;
            }
        }
    }
}

int fit_scale(int i)
{
    if (((i / 1000000) * 2 == (i / 1000 % 1000)) && ((i / 1000000) * 3 == (i % 1000)))
        return 1;
    return 0;
}