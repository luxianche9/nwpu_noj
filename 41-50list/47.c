#include <stdio.h>

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    int i, j;
    int sum;
    int n;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &n);
            if (j == 0 || j == M - 1 || i == 0 || i == N - 1)
                sum += n;
            else
                sum -= n;
        }
    }
    printf("%d", sum);
    
    return 0;
}