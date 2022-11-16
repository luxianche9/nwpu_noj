#include <stdio.h>

struct fraction {
    int numerator;
    int denominator;
};

void simplify(struct fraction *fp)
{
    for (int i = 1; i <= fp->denominator && i <= fp->numerator; i++)
    {
        if (fp->denominator / i * i == fp->denominator && fp->numerator / i * i == fp->numerator)
        {
            fp->denominator /= i;
            fp->numerator /= i;
            i = 1;
        }
    }
}

int main(void)
{
    struct fraction m, n, result;
    char sign;

    scanf("%d/%d%c%d/%d", &m.numerator, &m.denominator, &sign, &n.numerator, &n.denominator);
    if (sign == '-') n.numerator *= -1;

    result.numerator = m.numerator * n.denominator + n.numerator * m.denominator;
    result.denominator = m.denominator * n.denominator;

    if (result.numerator == 0)
        printf("0");
    else
    {
        simplify(&result);
        printf("%d/%d", result.numerator, result.denominator);
    }

    return 0;
}