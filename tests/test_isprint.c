#include <stdio.h>
#include "../libft.h"

int main(void)
{
    printf("Printable: %i\n", ft_isprint('a'));
    printf("Unprintable: %i\n", ft_isprint('\n'));
}