#include <stdio.h>
#include "../libft.h"

int main(int ac, char *av[])
{
    if (ac < 2)
    {
        printf("%s\n", "Program accepts 1 parameter");
        return (1);
    };
    printf("%i\n", ft_isalpha(av[1][0]));
    return (0);
}