#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main()
{
    char str[10];
    char *src = "Hello";
    ft_memcpy(str, src, 3);

    int i = 0;
    while (i < 10)
    {
        printf("Mine: %c\n", str[i]);
        i++;
    }

    char str1[10];
    memcpy(str1, src, 3);

    int j = 0;
    while (j < 10)
    {
        printf("Original: %c\n", str1[j]);
        j++;
    }
    return (0);
}