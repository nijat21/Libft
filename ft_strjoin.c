#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len;
    char *str;
    char *start;

    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    str = malloc(len);
    if (!str)
    {
        return NULL;
    }
    start = str;
    while (*s1)
    {
        *str = *s1;
        str++;
        s1++;
    }
    while (*s2)
    {
        *str = *s2;
        str++;
        s2++;
    }
    *str = '\0';
    return start;
}