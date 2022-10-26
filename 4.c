#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int temp;
    temp = a>b?a:b;
    printf("%d", temp>c?temp:c);

    return 0;
}