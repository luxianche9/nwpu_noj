#include <stdio.h>

int main(void)
{
    int day_per_month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int year, month, day;
    scanf("%d-%d-%d", &year, &month, &day);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        day_per_month[1] += 1;
    
    int count = 0;
    int i;
    for (i = 0; i < month - 1; i++)
        count += day_per_month[i];
    count += day;

    printf("%d", count);
    
    return 0;
}