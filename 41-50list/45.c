#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int i, j;
    int num;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &num);
            if ((i + j) <= N - 1)
                printf("%d", num);

            if (j < N - i - 1)
                printf(" ");
        }

        if (i != N - 1)
            printf("\n");
    }
    return 0;
}