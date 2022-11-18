#include <stdio.h>

int main(void)
{
    char input[100];
    char output[100];
    char insert;
    int index;

    char c;
    int i = 0;
    while ((c = getchar()) != '\n')
        input[i++] = c;
    input[i] = '\0';

    scanf("%c %d", &insert, &index);

    int m = 0, n = 0;
    while (input[m] != '\0')
    {
        if (m == index)
            output[n++] = insert;
        output[n++] = input[m++];
    }
    output[n] = '\0';

    printf("%s", output);
    return 0;
}