#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[1000];
    fgets(input, 1000, stdin);
    int n, loc;
    scanf("%d %d", &n, &loc);
    
    for (int i = 0; i < n; i++)
        putchar(input[i]);
    putchar('\n');
    for (int i = strlen(input) - n - 1; i < strlen(input) - 1; i++)
        putchar(input[i]);
    putchar('\n');
    for (int i = loc; i < loc + n; i++)
        putchar(input[i]);
    return 0;
}