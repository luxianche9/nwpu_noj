#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main(void)
{
    int length;
    int index;
    int weight_list[100];
    scanf("%d %d", &length, &index);
    for (int i = 0; i < length; i++)
        scanf("%d", weight_list + i);

    int demand_weight = weight_list[index];
    qsort(weight_list, length, sizeof(int), compare);

    for (int i = 0; i < length; i++)
    {
        if (weight_list[i] == demand_weight)
        {
            printf("%d", i + 1);
            break;
        }
    }
    return 0;
}