#include <stdio.h>

void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int partition(int *A, int low, int high)
{
  int pivot = A[high];
  int i = low - 1;
  for (int j = low; j < high; j++)
  {
    if (A[j] > pivot)
    {
      i++;
      swap(&A[i], &A[j]);
    }
  }
  swap(&A[high], &A[i + 1]);
  return i + 1;
}

void quicksort(int *A, int low, int high)
{
  if (low < high)
  {
    int pi = partition(A, low, high);
    quicksort(A, low, pi - 1);
    quicksort(A, pi + 1, high);
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

  quicksort(A, s, m);

  for (i = 0; i < n; i++)
  {
    printf("%d", A[i]);
    if (i != n - 1)
      printf(" ");
  }
  return 0;
}