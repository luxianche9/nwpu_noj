#include <stdio.h>

double avg(int*,int,int);

int main(void)
{
    int A[100];
    int n;
    int s, e;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    scanf("%d %d", &s, &e);
    printf("%.6lf", avg(A, s, e));
    return 0;
}

double avg(int A[], int s, int e)
{
    double sum = 0;
    for (int i = s; i <= e; i++)
        sum += A[i];
    return sum / (e - s + 1);
}