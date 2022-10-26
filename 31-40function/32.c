#include <stdio.h>
#include <math.h>

int sum_factor(int);

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (sum_factor(a) == b && sum_factor(b) == a)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}

int sum_factor(int n)
{
    int i;
    int sum = 0;
    for (i = 1; i <= (int)sqrt(n); i++)
        if (n / i * i == n)
            sum += n / i + i;
    return sum - n;
}