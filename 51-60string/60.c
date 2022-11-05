#include <stdio.h>

void simplify_fraction(int *numerator, int *denominator)
{
    for (int i = 1; i <= *numerator; i++)
    {
        if (*numerator / i * i == *numerator && *denominator / i * i == *denominator)
        {
            *numerator /= i;
            *denominator /= i;
            i = 1;
        }
    }
}

int main(void)
{
    char input[1000];
    fgets(input, 1000, stdin);
    
    int U_cnt = 0;
    int D_cnt = 0;
    int S_cnt = 0;
    int sum = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        switch (input[i])
        {
        case 'U':
            U_cnt++;
            break;
        case 'D':
            D_cnt++;
            break;
        case 'S':
            S_cnt++;
            break;
        }
    }
    if (S_cnt != 0)
    {
        printf("WA");
        return 0;
    }
    sum = U_cnt + D_cnt;
    simplify_fraction(&U_cnt, &sum);
    if ((double)U_cnt/sum - 0.5 > 0.003)
    {
        printf("Fail");
        return 0;
    }
    printf("%d/%d", U_cnt, sum);
    return 0;
}