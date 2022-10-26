#include <stdio.h>
#include <stdlib.h>

int money_cnt(int);

int main(void)
{
    int staff_cnt;

    scanf("%d", &staff_cnt);

    int i;
    int sum_cnt = 0;
    int salary;
    for (i = 0; i < staff_cnt; i++)
    {
        scanf("%d", &salary);
        sum_cnt += money_cnt(salary);
    }

    printf("%d", sum_cnt);
    return 0;
}

int money_cnt(int money)
{
    int cnt = 0;
    cnt += money / 100;
    money %= 100;
    cnt += money / 50;
    money %= 50;
    cnt += money / 10;
    money %= 10;
    cnt += money / 5;
    money %= 5;
    cnt += money / 2;
    money %= 2;
    cnt += money / 1;

    return cnt;
}