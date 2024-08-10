#include <stdlib.h>
char *ft_strdup(char *src)
{
    int len;
    int i;
    char    *tab;

    len = 0;
    i = 0;
    while (src[len])
    len++;
    tab = malloc(sizeof(char) * (len + 1));
    while (src[i])
    {
        tab[i] = src[i];
        i++;
    }
    tab[len] = '\0';
    return (tab);
}