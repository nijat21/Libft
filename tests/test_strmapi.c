#include "../libft.h"

char sample(unsigned int i, char c)
{
    return c + i;
}

int main(void)
{
    char (*f)(unsigned int, char) = sample;
    printf("Res: %s\n", ft_strmapi("string", f));
}