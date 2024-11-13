#include "libft.h"

static size_t count_words(char const *s, char c)
{
    size_t i;
    size_t in_word;
    size_t count;

    in_word = 0;
    count = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            if (!in_word)
            {
                count++;
                in_word = 1;
            }
        }
        else
            in_word = 0;
        i++;
    }
    return count;
}

static char *copy_substring(const char *start, size_t len)
{
    size_t i;

    char *substring = (char *)malloc((len + 1) * sizeof(char));
    if (!substring)
        return NULL;
    i = 0;
    while (start[i] && i < len)
    {
        substring[i] = start[i];
        i++;
    }
    substring[len] = '\0';
    return substring;
}

char **ft_split(char const *s, char c)
{
    char **res;
    char const *start;
    size_t i;
    size_t len;

    if (!s)
        return NULL;
    res = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
    if (!res)
        return NULL;
    i = 0;
    while (*s)
    {
        if (*s != c)
        {
            start = s;
            len = 0;
            while (*s && *s != c)
            {
                s++;
                len++;
            }
            res[i] = copy_substring(start, len);
            if (!res[i])
            {
                while (i > 0)
                {
                    free(res[--i]);
                }
                free(res);
                return NULL;
            }
            i++;
        }
        else
            s++;
    }
    return res;
}