// #include <stdio.h>

// int remain(int *lst, int length)
// {
//     int remain = 0;
//     for (int i = 0; i < length; i++)
//         if (lst[i])
//             remain++;
//     return remain;
// }

// void elimate(int *lst, int length, int n)
// {
//     for (int i = 0, real_i = 0; i < length; i++)
//     {
//         if (lst[i])
//         {
//             real_i++;
//             if (real_i % n == 0)
//                 lst[i] = 0;
//         }
//     }
// }

// void print(int *lst, int length)
// {
//     for (int i = 0; i < length; i++)
//     {
//         if (lst[i])
//         {
//             if (i == 0)
//                 printf("%d", i + 1);
//             else
//                 printf(" %d", i + 1);
//         }
//     }
// }

// int main(void)
// {
//     int length;
//     int target_length;
//     int lst[100];
//     int n[20];

//     scanf("%d %d", &length, &target_length);
//     for (int i = 0; i < length; i++)
//         lst[i] = 1;
//     for (int i = 0; i < 20; i++)
//         scanf("%d", n + i);

//     for (int i = 0; remain(lst, length) > target_length && i < 20; i++)
//     {
//         elimate(lst, length, n[i]);
//     }

//     print(lst, length);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
int cardNum[20] = {0};
int isLucky[51] = {0};
int childLeft, count;
void pickChild(int n, int x)
{
    int i, j;
    while (1)
    {
        for (i = 0; i < 20; ++i)
        {
            count = 0;
            for (j = 1; j <= n; ++j)
            {
                count += isLucky[j];
                if (count == cardNum[i])
                {
                    isLucky[j] = 0;
                    if (x == --childLeft)
                        return;
                    count = 0;
                }
            }
        }
    }
}
int main()
{
    int n, x, i;
    scanf("%d%d", &n, &x);
    for (i = 0; i < 20; ++i)
    {
        scanf("%d", cardNum + i);
    }
    for (i = 1; i <= n; ++i)
        isLucky[i] = 1;
    childLeft = n;
    pickChild(n, x);
    for (i = 1; i <= n; i++)
        if (isLucky[i] == 1)
            printf("%d ", i);
    return 0;
}
