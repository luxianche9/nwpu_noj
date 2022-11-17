#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_up(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}

int compare_low(const void *a, const void *b)
{
    return *(char *)b - *(char *)a;
}

void exchange(char* input, int length)
{
    char temp[length / 2 + 1];
    strncpy(temp, input, length / 2);
    strncpy(input, input + length / 2 + length % 2, length / 2);
    strncpy(input + length / 2 + length % 2, temp, length / 2);
}

int main(void)
{
    char input[100];
    scanf("%s", input);
    int length = strlen(input);
    qsort(input, length / 2,sizeof(char), compare_low);
    qsort(input + length / 2 + length % 2, length / 2, sizeof(char), compare_up);
    exchange(input, length);
    printf("%s", input);
}