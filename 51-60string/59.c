#include<stdio.h>
#include<string.h>

int main(void)
{
    char s1[200];
    char s2[100];
    scanf("%s", s1);
    scanf("%s", s2);
    strcat(s1, s2);
    printf("%s", s1);

    return 0;
}