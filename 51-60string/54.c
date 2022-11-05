#include <stdio.h>

int main(void)
{
    char input[1000];
    fgets(input, 1000, stdin);
    int i;
    for (i = 0; input[i + 3] != '\0'; i++)
    {
        if (input[i] == 'y' && input[i + 1] == 'o' && input[i + 2] == 'u')
        {
            i += 3;
            printf("we");
        }
        putchar(input[i]);
    }
    putchar(input[i++]);
    putchar(input[i]);
    return 0;
}