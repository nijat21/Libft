#include <stdio.h>
#include "../libft.h"
#include <string.h>

int main()
{
    const char *str = "Hello";
    printf("Initial location: %p\n", str);

    printf("Mine: %p\n", ft_strrchr(str, '\0'));
    printf("Original: %p\n", strrchr(str, '\0'));
    printf("Mine: %p\n", ft_strrchr(str, 'l'));
    printf("Original: %p\n", strrchr(str, 'l'));
    printf("Mine: %p\n", ft_strrchr(str, 's'));
    printf("Original: %p\n", strrchr(str, 's'));
}