#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main()
{
    char str[10];
    ft_bzero(str, 5);

    int i = 0;
    while (i < 10)
    {
        printf("Mine: %i\n", str[i]);
        i++;
    }

    char str1[10];
    bzero(str1, 5);

    int j = 0;
    while (j < 10)
    {
        printf("Original: %i\n", str1[j]);
        j++;
    }
    return (0);
}