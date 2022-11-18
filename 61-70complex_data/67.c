#include <stdio.h>
#include <string.h>

int equal(char *str_1, char * str_2, int length)
{
    int result = 1;
    for (int i = 0; i < length; i++)
    {
        result *= (str_1[i] == str_2[i]);
    }
    return result;
}

int main(void)
{
    int cnt_if = 0;
    int cnt_while = 0;
    int cnt_for = 0;

    FILE * fp = fopen("DATA5610.TXT", "r");
    char line[300];
    int i;
    while (!feof(fp))
    {
        fgets(line, 300, fp);
        for (i = 0; i < strlen(line); i++)
        {
            if (equal(line + i, "if", 2))
                cnt_if++;
            else if (equal(line + i, "for", 3))
                cnt_for++;
            else if (equal(line + i, "while", 5))
                cnt_while++;
        }
    }
    fclose(fp);
    printf("%d %d %d", cnt_if, cnt_while, cnt_for);
    return 0;
}