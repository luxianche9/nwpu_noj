#include <stdio.h>

int main(void)
{
    int grade;
    char level;
    scanf("%d", &grade);

    if (grade >= 90 && grade <= 100)
        level = 'A';
    else if (grade >= 80 && grade <= 89)
        level = 'B';
    else if (grade >= 70 && grade <= 79)
        level = 'C';
    else if (grade >= 60 && grade <= 69)
        level = 'D';
    else if (grade <= 59)
        level = 'E';
    printf("%c", level);
    return 0;
}