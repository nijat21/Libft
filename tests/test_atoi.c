#include "../libft.h"

int main()
{
    printf("Original: %d\n", atoi(" 2147483647 abd123"));
    printf("Mine: %d\n", ft_atoi(" 2147483647 abd123"));
    printf("Original: %d\n", atoi("-2147483648abd123"));
    printf("Mine: %d\n", ft_atoi("-2147483648abd123"));
    printf("Original: %d\n", atoi("--123abd123"));
    printf("Mine: %d\n", ft_atoi("--123abd123"));
    printf("Original: %d\n", atoi("-abd123"));
    printf("Mine: %d\n", ft_atoi("-abd123"));
}