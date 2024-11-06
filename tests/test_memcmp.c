#include <stdio.h>
#include "../libft.h"
#include <string.h>

int main()
{
    printf("Mine: %d\n", ft_memcmp("hello", "hello", 5));
    printf("Original: %d\n", memcmp("hello", "hello", 5));
    printf("Mine: %d\n", ft_memcmp("hey", "hi", 3));
    printf("Original: %d\n", memcmp("hey", "hi", 3));
    printf("Mine: %d\n", ft_memcmp("hey", "he", 3));
    printf("Original: %d\n", memcmp("hey", "he", 3));
}