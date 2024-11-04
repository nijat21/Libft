#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main()
{
    char *src = "Hello";

    char str[10] = "dome";
    int res = ft_strlcat(str, src, 9);
    printf("Cat'ed: %i\n", res);
    int i = 0;
    printf("Mine: %s\n", str);

    char str1[10] = "dome";
    int res1 = strlcat(str1, src, 9);
    int j = 0;
    printf("Cat'ed: %i\n", res1);
    printf("Original: %s\n", str1);
    return (0);
}