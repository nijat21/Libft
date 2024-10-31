#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main()
{
    char str[10];
    void *res = ft_memset(str, 'c', 8);
    printf("Mine: %p\n", res);
    int i = 0;
    while (i < 10)
    {
        printf("Mine: %c\n", str[i]);
        i++;
    }

    char str1[10];
    void *res1 = memset(str1, 'c', 8);
    printf("Res1: %p\n", res1);
    int j = 0;
    while (j < 10)
    {
        printf("Original: %c\n", str1[j]);
        j++;
    }
    return (0);
}