#include <stdio.h>

int main(void)
{
    static int sponge_babies[100];
    static int tentacles[100];

    int n, m;
    scanf("%d %d", &n, &m);

    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &tentacles[i]);
    for (i = 0; i < m; i++)
        scanf("%d", &sponge_babies[i]);

    int cost = 0;
    int x_index;
    int ability_index;
    int min = 0, min_index;
    for (x_index = 0; x_index < n; x_index++)
    {
        for (ability_index = 0; ability_index < m; ability_index++)
        {
            if (min)
            {
                if (sponge_babies[ability_index] >= tentacles[x_index] && sponge_babies[ability_index] <= min)
                {
                    min = sponge_babies[ability_index];
                    min_index = ability_index;
                }
            }
            else
            {
                if (sponge_babies[ability_index] >= tentacles[x_index])
                {
                    min = sponge_babies[ability_index];
                    min_index = ability_index;
                }
            }
        }
        if (min != 0)
        {
            cost += sponge_babies[min_index];
            sponge_babies[min_index] = 0;
        }
        else
        {
            printf("NULL");
            return 0;
        }
    }
    
    printf("%d", cost);
    return 0;
}