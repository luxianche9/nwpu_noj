#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    int a = 1, b = 0;
    int a_increas, b_increas;

    int time;
    for (time = 0; time < t; time++)
    {
        a_increas = b;
        b_increas = 3 * a + 2*b;
        a = a_increas;
        b = b_increas;
    }

    printf("%d %d", a_increas, b_increas);
    return 0;
}