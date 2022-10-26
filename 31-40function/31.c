#include <stdio.h>

unsigned char xchg(unsigned char input);

int main(void)
{
    unsigned char input;
    scanf("%hhu", &input);
    printf("%u", xchg(input));
    return 0;
}

inline unsigned char xchg(unsigned char input)
{
    return input << 4 | input >> 4;
}