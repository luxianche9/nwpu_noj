#include <stdio.h>

int main(void)
{
    char input[100];
    scanf("%s", input);    

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (i % 2 == 1 && input[i] % 2 == 1)
            putchar(input[i]);
    }
    return 0;
}