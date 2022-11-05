#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char tmp[11];
    strncpy(tmp, a, 11);
    strncpy(a, b, 11);
    strncpy(b, tmp, 11);
}

void sort(char items[][11])
{
    char *min;
    for (int i = 0; i < 10; i++)
    {
        min = items[i];
        for (int j = i; j < 10; j++)
        {
            if (strcmp(items[j], min) < 0)
                min = items[j];
        }
        swap(min, items[i]);
    }
}

int main(void)
{
    char items[10][11];
    char input[110];
    fgets(input, 110, stdin);

    int world_len = (strlen(input) - 9) / 10;
    for (int i = 0; i < 10; i++)
    {
        strncpy(items[i], &input[i * (world_len + 1)], world_len);
        items[i][world_len] = '\0';
    }

    sort(items);

    for (int i = 0; i < 9; i++)
        printf("%s ", items[i]);
    printf("%s", items[9]);
    return 0;
}