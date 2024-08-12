#include<stdlib.h>
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
    i++;
    return (i);
}
char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i])
    i++;
    while (src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

int count_len(char **str, char *sep, int size)
{
    int i;
    int add;

    add = 0;
    i = 0;
    while (i < size)
    {
        add += ft_strlen(str[i]);
        i++;
    }
    add += ft_strlen(sep) * (size - 1);
    return (add);
}
char *ft_strjoin(int size, char **strs, char *sep)
{
    char *tab;
    int i;

    i = 0;
    tab = malloc(sizeof(char)* (count_len(strs,sep,size) + 1));
    while (i < size)
    {
        ft_strcat(tab, strs[i]);
        ft_strcat(tab, sep);
        i++;
    }
    tab[count_len(strs,sep,size)] = '\0';
    return (tab);
}

#include<stdio.h>
int main(){
    char *strs[]={"taha","malak","pool24","test"};
    char *s=ft_strjoin(4,strs," ");
    printf("%s",s);
}

