#include <stdio.h>

int main(void)
{
    int A[100];
    int B[100];
    int C[100];

    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &B[i]);
    for (i = 0; i < n; i++)
        C[i] = A[i] + B[i];
    for (i = 0; i < n; i++)
    {
        printf("%d", C[i]);
        if (i != n - 1)
            printf(" ");
    }
    
    return 0;
}