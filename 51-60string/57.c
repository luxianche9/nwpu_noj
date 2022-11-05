#include <stdio.h>

int main(void)
{
    char input[100];
    int i;
    while ((input[i++] = getchar()) != '=');
    for (int j = i - 2; j > 0; j--)
        printf("%c", input[j]);
    return 0;
}