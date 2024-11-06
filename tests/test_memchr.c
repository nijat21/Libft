#include <stdio.h>
#include "../libft.h"
#include <string.h>

int main()
{
    printf("Mine: %p\n", ft_memchr("hello", 'l', 5));
    printf("Original: %p\n", memchr("hello", 'l', 5));
    printf("Mine: %p\n", ft_memchr("hey", 'y', 3));
    printf("Original: %p\n", memchr("hey", 'y', 3));
}