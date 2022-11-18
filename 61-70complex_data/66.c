#include <stdio.h>

int main(void)
{
    FILE *src = fopen("DATA5612.CPP", "r");
    FILE *dest = fopen("DATA5612.TXT", "w");
    char line[1000];
    int n = 1;
    while (!feof(src))
    {
        fgets(line, 1000, src);
        fprintf(dest, "%04d %s", n++, line);
    }
    fclose(src);
    fclose(dest);
    return 0;
}