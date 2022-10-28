#include <stdio.h>

void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void select_sort(int *A, int low, int high)
{
    int max_index;
    for (int i = low; i <= high - 1; i++)
    {
        max_index = i;
        for (int j = i + 1; j <= high; j++)
            if (A[j] > A[max_index])
                max_index = j;
        swap(&A[max_index], &A[i]);
    }
}

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

  select_sort(A, s, m);

  for (i = 0; i < n; i++)
  {
    printf("%d", A[i]);
    if (i != n - 1)
      printf(" ");
  }
  return 0;
}