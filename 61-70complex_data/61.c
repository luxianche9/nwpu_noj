#include <stdio.h>

int main(void)
{
    FILE * fp1;
    FILE * fp2;
    fp1 = fopen("DATA5613.TXT","r");
    fp2 = fopen("DATA5613.CPP","r");
    char c1, c2;
    int row = 1;
    int col = 1;
    while (!feof(fp1))
    {
        c1 = fgetc(fp1);
        c2 = fgetc(fp2);
        if (c1 == '\n' || c2 == '\n')
        {
            row++;
            col = 1;
        }
        else if (c1 != c2)
        {
            printf("%d %d\n", row, col);
            col++;
        }
        else
            col++;
    }
    return 0;
}