#include <stdio.h>

void BubbleSort(int A[], int s, int m);

int main(void)
{
    int n;
    int A[100];
    int s, m;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    scanf("%d %d", &s, &m);

    BubbleSort(A, s, m);

    for (i = 0; i < n; i++)
    {
        printf("%d", A[i]);
        if (i != n - 1)
            printf(" ");
    }
    return 0;
}

void BubbleSort(int A[], int s, int m)
{
    int a, b;
    int tmp;
    int exchanged = 1;
    
    int i;
    while (exchanged)
    {
        exchanged = 0;
        for (i = 0; i < m - 1; i++)
        {
            if (A[s + i] < A[s + i + 1])
            {
                tmp = A[s + i];
                A[s + i] = A[s + i + 1];
                A[s + i + 1] = tmp;
                exchanged = 1;
            }
        }
    }
}