#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *tab;
    int len;
    int i;

    i = 0;
    len = max - min;
    if (min >= max)
    return (0);
    tab = malloc(sizeof(int) * len);
    while (min < max)
    {
        tab[i] = min;
        min ++;
        i++;
    }
    return (tab);
}