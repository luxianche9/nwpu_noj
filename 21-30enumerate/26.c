#include <stdio.h>
#include <math.h>

int ten(int);

int main(void)
{
    int input;
    scanf("%d", &input);
    int cnt = 0;

    int n = 1;
    while (input / ten(n - 1) != 0)
    {
        cnt += input / ten(n) * ten(n - 1);
        if (input % ten(n) / ten(n - 1) > 1)
            cnt += ten(n - 1);
        else if (input % ten(n) / ten(n - 1) == 1)
        {
            if (n == 1)
                cnt++;
            else
                cnt += input % ten(n - 1) + 1;
        }

        n++;
    }

    printf("%d", cnt);
    return 0;
}

int ten(int i)
{
    int result = 1;
    int j;
    for (j = 0; j < i; j++)
        result *= 10;
    return result;
}