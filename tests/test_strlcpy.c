#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main()
{
    char *src = "Hello";

    char str[10];
    ft_strlcpy(str, src, 10);
    int i = 0;
    while (i < 10)
    {
        printf("Mine: %c\n", str[i]);
        i++;
    }

    char str1[10];
    strlcpy(str1, src, 10);
    int j = 0;
    while (j < 10)
    {
        printf("Original: %c\n", str1[j]);
        j++;
    }
    return (0);
}