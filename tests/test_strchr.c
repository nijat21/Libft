#include <stdio.h>
#include "../libft.h"
#include <string.h>

int main()
{
    const char *str = "Hello";
    printf("Initial location: %p\n", str);

    printf("Mine: %p\n", ft_strchr(str, '\0'));
    printf("Original: %p\n", strchr(str, '\0'));
    printf("Mine: %p\n", ft_strchr(str, 's'));
    printf("Original: %p\n", strchr(str, 's'));
}