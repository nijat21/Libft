#include "../libft.h"

int main(int ac, char *av[])
{
    if (ac != 3)
        return (1);

    printf("Res: %s\n", ft_strtrim(av[1], av[2]));
}