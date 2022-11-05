#include <stdio.h>

int is_alphbet(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}

void print_slice(char * input, int a, int b)
{
    for (int i = a; i < b; i++)
        putchar(input[i]);
}

int main(void)
{
    char input[1000];
    int words_slice[1000][2];
    fgets(input, 200, stdin);

    int slice = 0;
    int in_word = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (is_alphbet(input[i]) && !in_word)
        {
            words_slice[slice][0] = i;
            in_word = 1;
        }
        else if (in_word && !is_alphbet(input[i]))
        {
            words_slice[slice++][1] = i;
            in_word = 0;
        }
    }

    for (int j = slice - 1; j >= 0; j--)
    {
        print_slice(input, words_slice[j][0], words_slice[j][1]);
        if (j != 0)
            putchar(' ');
    }

    return 0;
}