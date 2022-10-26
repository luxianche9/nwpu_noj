#include<stdio.h>

int main(void)
{
    int min, max;
    scanf("%d %d", &min, &max);
    int larger = min > max ? min : max;
    
    int i, j;
    int factor = 2;
    for (i = 1 + min + max - larger; i < larger; i++)
    {
        for (j = 2; j < i/2; j++)
            if ((i / j) * j == i)
                factor ++;
        if (factor == 2)
        {
            printf("%d", i);
            if (i != larger - 1)
                printf(" ");
        }
        factor = 2;
    }
    return 0;
}