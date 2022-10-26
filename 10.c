#include <stdio.h>
#include <math.h>

struct point
{
    float x;
    float y;
};

float distance(struct point, struct point);

int main(void)
{
    struct point a = {2, 2};
    struct point b = {2, -2};
    struct point c = {-2, 2};
    struct point d = {-2, -2};

    struct point input;
    scanf("%f,%f", &input.x, &input.y);

    int height = 0;

    if (distance(input, a) <= 1 ||
        distance(input, b) <= 1 ||
        distance(input, c) <= 1 ||
        distance(input, d) <= 1)
        height = 10;

    printf("%d", height);
    return 0;
}

float distance(struct point p1, struct point p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}