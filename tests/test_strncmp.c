#include <stdio.h>
#include "../libft.h"
#include <string.h>

int main()
{
    printf("Mine: %d\n", ft_strncmp("hello", "hello", 5));
    printf("Original: %d\n", strncmp("hello", "hello", 5));
    printf("Mine: %d\n", ft_strncmp("hey", "hi", 3));
    printf("Original: %d\n", strncmp("hey", "hi", 3));
    printf("Mine: %d\n", ft_strncmp("hey", "he", 3));
    printf("Original: %d\n", strncmp("hey", "he", 3));
}