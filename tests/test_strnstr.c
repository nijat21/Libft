#include "../libft.h"
#include <string.h>

int main()
{
    printf("Mine: %p\n", ft_strnstr("hello", "llo", 5));
    printf("Original: %p\n", strnstr("hello", "llo", 5));
    printf("Mine: %p\n", ft_strnstr("hello", "lo", 1));
    printf("Original: %p\n", strnstr("hello", "lo", 1));
    printf("Mine: %p\n", ft_strnstr("whello hi", "hi", 10));
    printf("Original: %p\n", strnstr("whello hi", "hi", 10));
    printf("Mine: %p\n", ft_strnstr("hello", "hey", 5));
    printf("Original: %p\n", strnstr("hello", "hey", 5));
}