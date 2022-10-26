#include <stdio.h>

int encrypt(int);

int main(void)
{
    int input;
    scanf("%d", &input);
    printf("%d", encrypt(input));
    return 0;
}

int encrypt(int input)
{
    int num[4];

    num[0] = input % 10;
    num[1] = input % 100 / 10;
    num[2] = input % 1000 / 100;
    num[3] = input % 10000 / 1000;

    int i;
    for (i = 0; i < 4; i++)
        num[i] = (num[i] + 5) % 10;

    int tmp;
    tmp = num[0];
    num[0] = num[3];
    num[3] = tmp;
    
    tmp = num[1];
    num[1] = num[2];
    num[2] = tmp;

    return num[0] + num[1] * 10 + num[2] * 100 + num[3] * 1000;
}