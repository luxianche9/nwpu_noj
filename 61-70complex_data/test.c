#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100], a[100], b[100], t[100];
    int m, i, j, k, h = 0, o = 0;
    fgets(s, 100, stdin);
    if (s[strlen(s) - 1] == '\n')
        s[strlen(s) - 1] = '\0';
    fgets(a, 100, stdin);
    if (a[strlen(a) - 1] == '\n')
        a[strlen(a) - 1] = '\0';
    fgets(b, 100, stdin);
    if (b[strlen(b) - 1] == '\n')
        b[strlen(b) - 1] = '\0';
    for (i = 0; i < strlen(s); i++)
    {
        m = 0;
        k = 0;
        for (j = 0; j < strlen(a); j++)
            if (s[i] == a[j])
            {
                i++;
                m++;
            }
        i = i - m;
        if (m == strlen(a))
        {
            for (h = i + o; h < i + strlen(b) + o; h++)
            {
                t[h] = b[k];
                k++;
            }
            i = i + m - 1;
            o++;
        }
        else
        {
            t[h] = s[i];
            h++;
        };
    }
    for (i = 0; i < h; i++)
        printf("%c", t[i]);
    return 0;
}
