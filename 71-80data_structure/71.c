#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return strlen((char *)a) - strlen((char *)b);
}

int main(void)
{
    char name_list[15][25];
    int length;
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
        scanf("%s", name_list[i]);
    qsort(name_list, length, sizeof(char) * 20, compare);

    for (int i = 0; i < length; i += 2)
        printf("%s ", name_list[i]);

    if (length % 2 == 1)
        for (int i = length - 2; i > 1; i -= 2)
            printf("%s ", name_list[i]);
    else
        for (int i = length - 1; i > 1; i -= 2)
            printf("%s ", name_list[i]);
    
    printf("%s", name_list[1]);

    return 0;
}