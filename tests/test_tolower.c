#include <stdio.h>
#include "../libft.h"

int main(int ac, char *av[])
{
    if (ac < 2)
    {
        printf("%s\n", "Program accepts 1 argument");
        return (1);
    }

    printf("%c\n", ft_tolower(av[1][0]));
    return (0);
}